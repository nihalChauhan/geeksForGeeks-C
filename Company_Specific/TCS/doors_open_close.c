#include <stdio.h>
#include <math.h>

int main(){
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    if(sqrt(i)==(int)sqrt(i*1.0))
      printf("1");
    else printf("0");
  }
  printf("\n%d\n", (int)sqrt(n*1.0));
  return 0;
}
