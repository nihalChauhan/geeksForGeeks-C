#include <stdio.h>

int main(){
  int a[20], p[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++)
    p[i] = 1;
  int temp=1;
  for(i=0; i<n; i++){
    p[i] = temp;
    temp *= a[i];
  }
  temp=1;
  for(i=n-1; i>=0; i--){
    p[i] *= temp;
    temp *= a[i];
  }
  for(i=0; i<n; i++)
    printf("%d ", p[i]);
}
