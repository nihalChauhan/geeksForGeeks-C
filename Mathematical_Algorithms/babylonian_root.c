#include <stdio.h>

float square_root(float n);

int main()
{
  float x;
  scanf("%f", &x);
  printf ("Square root : %f\n", square_root(x));
  getchar();
}

float square_root(float n){
  float x = n;
  float y = 1;
  float e = 0.00001;
  while(x-y > e){
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}
