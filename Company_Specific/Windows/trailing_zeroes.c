#include <stdio.h>

int trailing_zeroes(int a);

int main(){
  int a;
  scanf("%d", &a);
  printf("%d\n", trailing_zeroes(a));
  return 0;
}

int trailing_zeroes(int a){
  int i, t, count = 0;
  for(i=5; i<=a; i+=5){
    t = i;
    while(t%5==0 && t>=5){
      count++;
      t=t/5;
    }
  }
  return count;
}
