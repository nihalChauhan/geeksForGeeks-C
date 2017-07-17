#include <stdio.h>

int get_sum(int x, int y, int z);

int main(){
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  printf("%d\n", get_sum(x, y, z));
  return 0;
}

int factorial(int n){
  int f = 1;
  if (n==0||n==1)
    return 1;
  for (int i=2; i<=n; i++)
    f = f*i;
  return f;
}

int get_sum(int x, int y, int z){
  int fact = factorial(x+y+z);

  int digitsum = 5*x + 6*y + 7*z;
  digitsum *= (fact/(x+y+z));

  int res = 0;
  for(int i=1, k=1; i<=x+y+z; i++){
    res  += (k*digitsum);
    k = k*10;
  }
  return res;
}
