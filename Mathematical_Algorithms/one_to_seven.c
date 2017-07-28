#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_rand();

int main(){
  printf ("%d\n", my_rand());
  return 0;
}

int foo(){
  time_t t;
  srand((unsigned)time(&t));
  return rand() % 7;
}

int my_rand(){
  int i;
  i = 5*foo() + foo() - 5;
  if(i < 22)
    return i%7 + 1;
  return my_rand();
}
