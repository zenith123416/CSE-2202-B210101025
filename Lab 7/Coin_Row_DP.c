#include <stdio.h>

int coinRow(int a[], int n) {
  int dp[n+1];
  dp[0]=0; dp[1]=a[0];
  for(int i=2;i<=n;i++)
    dp[i]=dp[i-1]>dp[i-2]+a[i-1]?dp[i-1]:dp[i-2]+a[i-1];
  return dp[n];
}

int main() {
  int a[]={5,1,2,10,6,2};
  printf("%d\n", coinRow(a,6));
  return 0;
}
