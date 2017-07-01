#include <stdio.h>

float power(float x, int y);

int main(){
  float x;
  int y;
  scanf("%f", &x);
  scanf("%d", &y);
  printf("%f\n", power(x,y));
  return 0;
}

float power(float x, int y){
  float temp;
  if(y==0)
    return 1;
  temp = power(x,y/2);
  if(y%2 == 0)
    return temp*temp;

  if(y>0)
      return x*temp*temp;

  return (temp*temp)/x;
}
