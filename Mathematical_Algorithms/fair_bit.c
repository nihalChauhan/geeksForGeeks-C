#include <stdio.h>

int fair();

int main(){
  printf("%d\n", fair());
  return 0;
}

int foo(){
  return 0; // code here to return random values with 0.6 and 0.4 probabilities
}

int fair(){
  int v1 = foo();
  int v2 = foo();
  if(v1 == 0 && v2 == 1)
    return 0;
  if(v1 == 1 && v2 == 0)
    return 1;
  return fair();
}
