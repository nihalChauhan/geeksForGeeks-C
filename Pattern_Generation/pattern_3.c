#include <stdio.h>

void print_ahead(int x, int i);

int main(){
  int n, i;
  scanf("%d", &n);
  int x=1;
  for(i=1; i<=n; i++, x+=i-1)
    print_ahead(x, i);
  return 0;
}

void print_ahead(int x, int i){
  for(int j=1; j<=2*i-1; j++)
    printf("%d ", j<i?x++:x--);
  printf("\n");
}
