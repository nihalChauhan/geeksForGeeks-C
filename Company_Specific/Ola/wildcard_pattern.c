#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool match(char a[100], char b[100], int n, int m);

int main(){
  char a[100], b[100], c[100];
  fgets(a, 100, stdin);
  fgets(b, 100, stdin);
  int i, j;
  int n = strlen(a);
  int m = strlen(b);
  j=0;
  for(i=0; i<m; i++){
    if(b[i]=='*'){
      c[j++]=b[i++];
      while(b[i]=='*' || b[i]=='?')
        i++;
      i--;
    }
    else
      c[j++]=b[i];
  }
  if(match(a, c, n, j))
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}

bool match(char a[100], char b[100], int n, int m){
  if(m==0)
    return (n==0);
  int i, j;
  bool check[n+1][m+1];
  for(i=0; i<=n; i++)
    for(j=0; j<=m; j++)
      check[i][j] = false;

  check[0][0] = true;
  for(j=1; j<=m; j++)
    if(b[j-1] == '*')
      check[0][j] = check[0][j-1];

  for(i=1; i<=n; i++)
    for(j=1; j<=m; j++){
      if(b[j-1] == '*')
        check[i][j] = (check[i][j-1] || check[i-1][j]);
      else if(b[j-1] == '?' || b[j-1] == a[i-1])
        check[i][j] = check[i-1][j-1];
      else
        check[i][j] = false;
    }
  return check[n][m];
}
