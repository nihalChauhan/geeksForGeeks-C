#include<stdio.h>

int minCost(int cost[10][10], int n, int m);
int min(int x, int y, int z);

int main()
{
  int cost[10][10], n, m;

  scanf("%d %d", &n, &m);
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      scanf("%d", &cost[i][j]);

  printf("Minimum Cost : %d\n", minCost(cost, n-1, m-1));
  return 0;
}

int minCost(int cost[10][10], int n, int m)
{
  int tc[n+1][m+1], i, j;
  tc[0][0] = cost[0][0];

  for (i = 1; i <= n; i++)
    tc[i][0] = tc[i-1][0] + cost[i][0];

  for (j = 1; j <= m; j++)
    tc[0][j] = tc[0][j-1] + cost[0][j];

  for (i = 1; i <= n; i++)
    for (j = 1; j <= m; j++)
      tc[i][j] = min(tc[i-1][j-1],
                     tc[i-1][j],
                     tc[i][j-1]) + cost[i][j];

  return tc[n][m];
}

int min(int x, int y, int z)
{
  if (x < y)
    return (x < z)? x : z;
  return (y < z)? y : z;
}
