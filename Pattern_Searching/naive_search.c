#include <stdio.h>
#include <string.h>

void search(char a[], char b[]);

int main(){
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  search(a, b);
  return 0;
}

void search(char a[], char b[]){
  int i, j;
  int n = strlen(a);
  int m = strlen(b);
  for(i=0; i<n; i++){
    for(j=0; j<m; j++)
      if(a[i+j]!=b[j])
        break;
    if(j==m)
      printf("Pattern Found at : %d\n", i+1);
  }
}
