#include <stdio.h>

void coin(int a[], int n, int amt) {
  for(int i=n-1;i>=0;i--)
    while(amt>=a[i])
      amt-=a[i];
}

int main() {
  int a[]={1,2,5,10,20,50,100}, amt=93;
  coin(a,7,amt);
  return 0;
}
