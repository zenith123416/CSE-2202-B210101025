#include <stdio.h>

void merge(int a[], int l, int m, int r) {
  int n1=m-l+1,n2=r-m,L[n1],R[n2];
  for(int i=0;i<n1;i++) L[i]=a[l+i];
  for(int i=0;i<n2;i++) R[i]=a[m+1+i];
  int i=0,j=0,k=l;
  while(i<n1 && j<n2) a[k++]=L[i]<=R[j]?L[i++]:R[j++];
  while(i<n1) a[k++]=L[i++];
  while(j<n2) a[k++]=R[j++];
}

void mergeSort(int a[], int n) {
  for(int sz=1;sz<n;sz*=2)
    for(int l=0;l<n-1;l+=2*sz) {
      int m=l+sz-1,r=l+2*sz-1;
      if(m<n-1) merge(a,l,m,r<n-1?r:n-1);
    }
}

int main() {
  int a[]={4,1,3,9,7};
  int n=5;
  mergeSort(a,n);
  for(int i=0;i<n;i++) printf("%d ",a[i]);
  return 0;
}
