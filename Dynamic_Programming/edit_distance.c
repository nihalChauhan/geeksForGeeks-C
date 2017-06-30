#include<stdio.h>
#include<string.h>

int min(int x, int y, int z);
int min_dist(char X[], char Y[], int n, int m);

int main()
{
  char X[20];
  char Y[20];

  scanf("%s", X);
  scanf("%s", Y);

  printf("Minimum Edits : %d\n", min_dist(X, Y, strlen(X), strlen(Y)));
  return 0;
}

int min(int x, int y, int z){
  if(y<x)
    return(y<z ? y: z);
  return(x<z ? x: z);
}

int min_dist(char X[], char Y[], int n, int m){
  int d[n+1][m+1];
  for (int i=0; i<=n; i++){
    for (int j=0; j<=m; j++){
      if (i==0)
        d[i][j] = j;

      else if (j==0)
        d[i][j] = i;

      else if (X[i-1] == Y[j-1])
        d[i][j] = d[i-1][j-1];

      else
        d[i][j] = 1 + min(d[i][j-1],
                          d[i-1][j],
                          d[i-1][j-1]);
    }
  }
  return d[n][m];
}
