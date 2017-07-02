#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check_div(int x);

int main(){
  int x;
  scanf("%d", &x);
  if(check_div(x))
    printf("Divisible\n");
  else
    printf("Not Divisible\n");
  return 0;
}

bool check_div(int n){
  int odd, even;
  odd = even = 0;

  if(n<0) n=-n;
  else if( n==0 ) return true;
  if( n==1 ) return false;

  while(n){
    if(n & 1)
      odd++;
    n = n>>1;
    if(n & 1)
      even++;
    n = n>>1;
  }
  return check_div(abs(odd-even));
}
