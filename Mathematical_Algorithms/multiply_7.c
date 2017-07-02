#include <stdio.h>

int multi_7(int n);

int main(){
  int x;
  scanf("%d", &x);
  printf("%d\n", multi_7(x));
  return 0;
}

int multi_7(int n){
  int t;
  if(n<0)
    t=-n;
  else
    t=n;
  t = (t<<3) - t;
  if(n<0)
    return -t;
  return t;
}
