#include <stdio.h>
#include <stdbool.h>

bool find_saddle(int a[10][10], int n);

int main(){
  int a[10][10], n, m, i, j;
  scanf("%d%d", &n, &m);
  for(i=0; i<n; i++)
    for(j=0; j<m; j++)
      scanf("%d", &a[i][j]);
  if(!find_saddle(a, n))
    printf("None\n");
  return 0;
}

bool find_saddle(int a[10][10], int n){
  for (int i=0; i<n; i++){
    int min_row = a[i][0], col_ind = 0;
    for (int j = 1; j < n; j++){
      if (min_row > a[i][j]){
        min_row = a[i][j];
        col_ind = j;
      }
    }

    int k;
    for(k=0; k<n; k++)

    if (min_row < a[k][col_ind])
      break;

    if (k == n){
      printf("%d\n", min_row);
      return true;
    }
  }
  return false;
}
