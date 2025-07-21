#include <stdio.h>

int linear(int a[], int n, int x) {
  for(int i=0;i<n;i++)
    if(a[i]==x) return i;
  return -1;
}

int main() {
  int a[]={4,2,7,1,9};
  int n=5, x=1;
  printf("%d\n", linear(a,n,x));
  return 0;
}
