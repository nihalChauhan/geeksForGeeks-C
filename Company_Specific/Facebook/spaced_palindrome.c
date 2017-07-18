#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check_palindrome(char a[50]);

int main(){
  char a[50];
  fgets(a, 50, stdin);
  if(check_palindrome(a))
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}

bool check_palindrome(char a[50]){
  int j = strlen(a)-2;
  int i;
  i=0;
  while(i<j){
    if(a[i]==' ')
      while(a[i]==' ')
        i++;

    else if(a[j]==' ')
      while(a[j]==' ')
        j--;

    else if(a[i]!=a[j])
      return false;

    else{
      i++; j--;
    }
  }
  return true;
}
