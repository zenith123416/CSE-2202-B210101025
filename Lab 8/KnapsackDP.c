#include <stdio.h>

int knapsack(int w[], int v[], int n, int cap) {
  int dp[n+1][cap+1];
  for(int i=0;i<=n;i++)
    for(int j=0;j<=cap;j++) {
      if(i==0||j==0) dp[i][j]=0;
      else if(w[i-1]<=j)
        dp[i][j]=v[i-1]+dp[i-1][j-w[i-1]]>dp[i-1][j]?v[i-1]+dp[i-1][j-w[i-1]]:dp[i-1][j];
      else dp[i][j]=dp[i-1][j];
    }
  return dp[n][cap];
}

int main() {
  int w[]={1,3,4,5}, v[]={1,4,5,7};
  printf("%d\n", knapsack(w,v,4,7));
  return 0;
}
