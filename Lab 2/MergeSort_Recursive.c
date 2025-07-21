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

void mergeSort(int a[], int l, int r) {
  if(l<r) {
    int m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
  }
}

int main() {
  int a[]={4,1,3,9,7};
  int n=5;
  mergeSort(a,0,n-1);
  for(int i=0;i<n;i++) printf("%d ",a[i]);
  return 0;
}
