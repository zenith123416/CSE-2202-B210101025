#include <stdio.h>

void swap(int *a, int *b) {
  int t=*a;*a=*b;*b=t;
}

int part(int a[], int l, int r) {
  int p=a[r],i=l;
  for(int j=l;j<r;j++)
    if(a[j]<=p) swap(&a[i++],&a[j]);
  swap(&a[i],&a[r]);
  return i;
}

void quickSort(int a[], int l, int r) {
  if(l<r) {
    int p=part(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r);
  }
}

int main() {
  int a[]={4,1,3,9,7};
  int n=5;
  quickSort(a,0,n-1);
  for(int i=0;i<n;i++) printf("%d ",a[i]);
  return 0;
}
