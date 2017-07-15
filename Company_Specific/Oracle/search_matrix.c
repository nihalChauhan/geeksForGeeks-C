#include <stdio.h>

void search_m(int a[10][10], int n, int m, int k);

int main(){
  int a[10][10];
  int i, j, k, n, m;
  scanf("%d%d", &n, &m);
  for(i=0; i<n; i++)
    for(j=0; j<m; j++)
      scanf("%d", &a[i][j]);
  scanf("%d", &k);
  search_m(a, n, m, k);
  return 0;
}

void search_m(int a[10][10], int n, int m, int k){
  int i, j;
  i=0; j=m-1;
  while(i<n && j>=0){
    if(a[i][j] == k){
      printf("Found at : %d %d\n", i+1, j+1);
      return;
    }
    if(a[i][j]>k) j--;
    else i++;
  }
  printf("Not Found\n");
}
