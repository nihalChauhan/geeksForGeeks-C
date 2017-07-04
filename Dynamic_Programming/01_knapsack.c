#include <stdio.h>

int knapsack(int wt[], int val[], int w, int n);

int main(){
  int val[20], wt[20];
  int n, w, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &val[i]);
  for(i=0; i<n; i++)
    scanf("%d", &wt[i]);
  scanf("%d", &w);
  printf("Max value : %d\n", knapsack(wt, val, w, n));
  return 0;
}

int max(int a, int b){
  return (a>b ? a:b);
}

int knapsack(int wt[], int val[], int w, int n){
  int i, j;
  int k[n+1][w+1];
  for(i=0; i<=n; i++){
    for(j=0; j<=w; j++){
      if(i==0 || j==0)
        k[i][j] = 0;
      else if(wt[i-1] <= j)
        k[i][j] = max(val[i-1]+k[i-1][j-wt[i-1]], k[i-1][j]);
      else
        k[i][j] = k[i-1][j];
    }
  }
  return k[n][w];
}
