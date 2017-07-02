#include <stdio.h>
#include <stdbool.h>

bool check_harshad(int x);

int main(){
  int x;
  scanf("%d", &x);
  if(check_harshad(x))
    printf("Harshad Number\n");
  else
    printf("Not Harshad\n");
  return 0;
}

bool check_harshad(int x){
  if(x==0) return false;
  if(x<10) return true;
  int t = x;
  int s = 0;
  while(x){
    s += x%10;
    x/=10;
  }
  return t%s?false:true;
}
