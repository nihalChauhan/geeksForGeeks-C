#include <stdio.h>

int min_steps(int a[20], int b[20], int n);

int main(){
  int a[20], b[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++)
    scanf("%d", &b[i]);
  printf("%d\n", min_steps(a, b, n));
}

int mod(int x){
  return x<0? x*-1 : x;
}

int min_steps(int a[20], int b[20], int n){
  int diffx, diffy, i, sum=0;
  for(i=0; i<n-1; i++){
    diffx = a[i+1]-a[i];
    mod(diffx);

    diffy = b[i+1]-b[i];
    mod(diffy);

    if(diffx > diffy)
      sum += diffx;
    else
      sum += diffy;
  }
  return sum;
}
