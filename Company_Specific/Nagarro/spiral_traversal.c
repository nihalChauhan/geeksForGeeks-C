#include <stdio.h>

int main(){
  int a[10][10], n, i, j;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);

  int k=0;
  n--;
  while(k<(n+1)/2){
    for(i=k; i<=n-k; i++)
      printf("%d ", a[k][i]);
    for(i=k+1; i<=n-k; i++)
      printf("%d ", a[i][n-k]);
    for(i=n-k-1; i>=k; i--)
      printf("%d ", a[n-k][i]);
    for(i=n-k-1; i>=k+1; i--)
      printf("%d ", a[i][k]);
    printf("\n");
    k++;
  }
  n++;
  k=n/2;
  if(n%2)
    printf("%d ", a[k][k]);
  printf("\n");
  return 0;
}
