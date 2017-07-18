#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void fibonacci(int a[20], int n);

int main(){
  int a[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  fibonacci(a, n);
  printf("\n");
  return 0;
}

bool is_perfect(int x){
  int s = sqrt(x);
  return (s*s == x);
}

bool is_fibonacci(int x){
  return is_perfect(5*x*x + 4) || is_perfect(5*x*x - 4);
}

void fibonacci(int a[20], int n){
  for(int i=0; i<n; i++)
    if(is_fibonacci(a[i]))
      printf("%d ", a[i]);
}
