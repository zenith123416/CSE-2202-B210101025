#include <stdio.h>
#include <stdlib.h>

struct item {int w,v;};

int cmp(const void *x, const void *y) {
  float r1=((struct item*)x)->v/(float)((struct item*)x)->w;
  float r2=((struct item*)y)->v/(float)((struct item*)y)->w;
  return r2>r1?1:-1;
}

float knapsack(struct item a[], int n, int cap) {
  qsort(a,n,sizeof(a[0]),cmp);
  float res=0;
  for(int i=0;i<n;i++) {
    if(cap>=a[i].w) {
      cap-=a[i].w;
      res+=a[i].v;
    } else {
      res+=a[i].v*(float)cap/a[i].w;
      break;
    }
  }
  return res;
}

int main() {
  struct item a[]={{10,60},{20,100},{30,120}};
  printf("%.2f\n", knapsack(a,3,50));
  return 0;
}
