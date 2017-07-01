#include <stdio.h>
#include <stdbool.h>

bool check_prime(int x);

int main(){
  int x;
  scanf("%d", &x);
  if(check_prime(x))
    printf("Prime\n");
  else
    printf("Not Prime\n");
  return 0;
}

bool check_prime(int x){
  if(x%2==0 || x%3==0)
    return false;
  for(int i=5; i*i<=x; i=i+6)
    if(x%i==0 || x%(i+2)==0)
      return false;
  return true;
}
