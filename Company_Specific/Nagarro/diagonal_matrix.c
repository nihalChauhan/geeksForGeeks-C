#include <stdio.h>

int main(){
  int a[10][10], n, ii, jj, i, j;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      scanf("%d", &a[i][j]);
  int k=1;
  ii=jj=0;
  while(k<2*n){
    for(i=ii, j=jj; i>=0 && j<n; i--,j++)
      printf("%d\t", a[i][j]);
    printf("\n");

    if(k>=n) jj++;
    else ii++;
    k++;
  }
  printf("\n");
  return 0;
}
