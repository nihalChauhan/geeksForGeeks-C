#include <stdio.h>
#include <limits.h>

int get_pivot(int a[20], int n);

int main(){
  int a[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("%d\n", get_pivot(a, n));
  return 0;
}

int max(int a, int b){
  return a<b? b: a;
}

int min(int a, int b){
  return a<b? a: b;
}

int get_pivot(int a[20], int n){
  int left[n], i;
  left[0] = INT_MIN;
  for(i = 1; i < n; i++)
    left[i] = max(left[i-1], a[i-1]);
  int right = INT_MAX;
  for(i=n-1; i>=0; i--){
    if (left[i]<a[i] && right>a[i])
      return i;
    right = min(right, a[i]);
  }
  return -1;
}
