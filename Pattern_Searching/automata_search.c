#include <stdio.h>
#include <string.h>
#define range 256

void create_table(char b[], int m, int st[][range]);
void automata_search(char a[], char b[]);

int main(){
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  automata_search(a, b);
  return 0;
}

void create_table(char b[], int m, int st[][range]){
  int i, lps, j;
  for(i=0; i<range; i++)
    st[0][i] = 0;
  st[0][(int)b[0]] = 1;
  lps = 0;
  for(i=1; i<=m; i++){
    for(j=0; j<range; j++)
      st[i][j] = st[lps][j];
    st[i][(int)b[i]] = i+1;
    if(i<m)
      lps = st[lps][(int)b[i]];
  }
}

void automata_search(char a[], char b[]){
  int n = strlen(a);
  int m = strlen(b);
  int st[m+1][range];
  create_table(b, m, st);
  int state, i;
  state = 0;
  for(i=0; i<n; i++){
    state = st[state][(int)a[i]];
    if(state == m)
      printf("Pattern Found at : %d\n", i-m+2);
  }
}
