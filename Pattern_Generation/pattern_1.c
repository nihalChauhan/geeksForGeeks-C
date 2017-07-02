#include <stdio.h>

int main(){
  int n, j;
  scanf("%d", &n);
  int k = 1;
  int x = 1;
  int y = 1;
  for(int i=1; i<=2*n-1; i++){
    if(k==0)
      printf(" ");
    for(j=0; j<y; j++){
      if(j!=y-1)
      printf("* ");
      else
      printf("*");
    }

    for(j=n-x-1; j>0; j--){

      printf("  ");
    }

    if(i!=n)
    for(j=0; j<y; j++)
      printf(" *");
    else
      for(j=1; j<y; j++)
      printf(" *");

    k = !k;
    if(i<n){
      if(i%2==0)
        y++;
      x++;
    }
    else{
      if(i%2!=0)
        y--;
      x--;
  }
  printf("\n");
  }
  return 0;
}
