#include <stdio.h>

int coin_change(int s[], int n, int m);

int main(){
  int n, m;
  int s[10];
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &s[i]);
  scanf("%d", &m);
  printf("Number of sets : %d\n", coin_change(s, n, m));
  return 0;
}

int coin_change(int s[], int n, int m){
  int i, j;
  int c[m+1];
  for(i=0; i<=m; i++)
    c[i] = 0;
  c[0]=1;
  for(i=0; i<n; i++)
    for(j=s[i]; j<=m; j++)
      c[j] = c[j] + c[j-s[i]];
  return c[m];
}
