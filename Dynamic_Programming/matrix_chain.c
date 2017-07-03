#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int matrix_chain(int a[], int n);

int main(){
  int n;
  int a[20];
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("Minimum Multiplactions : %d\n", matrix_chain(a, n));
  return 0;
}

int matrix_chain(int a[], int n){
  int m[n][n];
  int i, j, l, q, k;
  for(i=0;i<n;i++)
    m[i][i] = 0;
  printf("\n");
  for(l=2; l<n; l++){
    for(i=1; i<n-l+1; i++){
      j=i+l-1;
      m[i][j] = INT_MAX;
      for(k=i; k<j; k++){
        q = m[i][k] + m[k+1][j] + a[i-1]*a[j]*a[k];
        if(q<m[i][j])
          m[i][j] = q;
      }
    }
  }
  for(i=1; i<n; i++){
    for(j=1; j<n; j++){
      if(j<i)
        printf("X\t");
      else
        printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
  return m[1][n-1];
}
