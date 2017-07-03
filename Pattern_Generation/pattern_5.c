#include <stdio.h>

int main(){
  int i, n, j, k=0;
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    if(i==(n+1)/2+1)k--;
    for(j=1;j<=n;j++){
      printf("%d ", k*n+j);
    }
    k = i<=(n+1)/2 ? k+2:k-2;
    printf("\n");
    if(i==(n+1)/2 && n%2)k-=2;
  }
  return 0;
}
