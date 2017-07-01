#include <stdio.h>
#include <string.h>

void kmp_search(char a[], char b[]);
void build_lps(char a[], int lps[], int m);

int main(){
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  kmp_search(a,b);
  return 0;
}

void build_lps(char b[], int lps[], int m){
  lps[0] = 0;
  int j=0, i=1;
  while(i<m){
    if(b[i] == b[j]){
      j++;
      lps[i]=j;
      i++;
    }
    else{
      if(j!=0)
        j=b[j-1];
      else{
        lps[i] = 0;
        i++;
      }
    }
  }
}

void kmp_search(char a[], char b[]){
  int n = strlen(a);
  int m = strlen(b);
  int lps[m];
  build_lps(b, lps, m);
  int i, j;
  i=j=0;
  while(i<n){
    if(b[j]==a[i]){
      i++; j++;
    }
    if(j==m){
      printf("Found at : %d\n", i-j+1);
      j = lps[j-1];
    }
    else if(i<n && b[j]!=a[i]){
      if(j!=0)
        j = lps[j-1];
      else
        i++;
    }
  }
}
