#include <stdio.h>
#include <string.h>

int get_count(char a[50]);

int main(){
  char a[50];
  fgets(a, 50, stdin);
  printf("%d\n", get_count(a));
  return 0;
}

int get_count(char a[50]){
  int i, k;
  i=k=0;
  while(a[i]!='\0'){
    if(a[i]=='1' && a[i+1]=='0'){
      i++;
      while(a[i]=='0'){
        i++;
      }
      if(a[i]=='1')
        k++;
    }
    else i++;
  }
  return k;
}
