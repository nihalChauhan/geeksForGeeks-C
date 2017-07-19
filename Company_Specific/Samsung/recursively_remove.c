#include <stdio.h>
#include <string.h>

char* remove_adjacent(char a[50], int n);

int main(){
  char a[50];
  fgets(a, 50, stdin);
  printf("%s", remove_adjacent(a, strlen(a)));
  return 0;
}

char* remove_adjacent(char a[50], int n){
  int i, k=0;
  for(i=1; i<n; i++){
    if(a[i-1]!=a[i])
      a[k++]=a[i-1];
    else
      while(a[i-1]==a[i])
        i++;
  }
  a[k++] = a[i-1];
  a[k] = '\0';
  if(k!=n)
    remove_adjacent(a, k);
  return a;
}
