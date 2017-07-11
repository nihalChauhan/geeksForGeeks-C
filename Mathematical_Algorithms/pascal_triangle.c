#include <stdio.h>

void printPascal(int n);

int main(){
  int n;
  scanf("%d", &n);
  printPascal(n);
  return 0;
}

void printPascal(int n){
  for(int r=1; r<=n; r++){
    int c=1;
    for(int k=n-1; k>=r; k--)
      printf("\t");
    for(int i=1; i<=r; i++){
      printf("%d\t\t", c);
      c = c*(r-i)/i;
    }
    printf("\n");
  }
}
