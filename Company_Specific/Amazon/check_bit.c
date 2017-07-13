#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d", &n);
  float k = log(n+1)/log(2);
  if(k-(int)k==0)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
