#include <stdio.h>

int binary(int a[], int n, int x) {
  int l=0,r=n-1;
  while(l<=r) {
    int m=(l+r)/2;
    if(a[m]==x) return m;
    if(a[m]<x) l=m+1;
    else r=m-1;
  }
  return -1;
}

int main() {
  int a[]={1,3,5,7,9};
  int n=5, x=5;
  printf("%d\n", binary(a,n,x));
  return 0;
}
