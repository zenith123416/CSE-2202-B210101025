#include <stdio.h>

int coinRow(int a[], int n) {
  if(n==0) return 0;
  if(n==1) return a[0];
  int x=coinRow(a,n-1);
  int y=coinRow(a,n-2)+a[n-1];
  return x>y?x:y;
}

int main() {
  int a[]={5,1,2,10,6,2};
  printf("%d\n", coinRow(a,6));
  return 0;
}
