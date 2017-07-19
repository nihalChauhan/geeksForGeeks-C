#include <stdio.h>

int count_paths(int m, int n);

int main(){
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", count_paths(n, m));
  return 0;
}

int count_paths(int m, int n){
  int count[m][n], i, j;
  for(i=0; i<m; i++)
    count[i][0] = 1;

  for(j=0; j<n; j++)
    count[0][j] = 1;

  for(i=1; i<m; i++)
    for (int j = 1; j < n; j++)
      count[i][j] = count[i-1][j] + count[i][j-1];
  return count[m-1][n-1];
}
