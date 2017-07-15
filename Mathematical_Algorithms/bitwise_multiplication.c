#include <stdio.h>

int multiply(int a, int b);

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", multiply(a, b));
  return 0;
}

int multiply(int a, int b){
  int r = 0;
  while(b>0){
    if(b & 1)
      r = r + a;
    a = a << 1;
    b = b >> 1;
  }
  return r;
}
