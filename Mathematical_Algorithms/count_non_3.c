#include <stdio.h>

int count(int n);

int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n", count(n));
  return 0;
}

int count(int n){
  if(n<3)
    return n;
  if(n<=9)
    return n-1;

  int p;
  for(p=10; n/p>9; p*=10);
  int msd = n/p;

  if(msd != 3)
    return count(msd)*(count(p-1) + 1) + count(n%p);
  else
    return count(msd*p - 1);
}
