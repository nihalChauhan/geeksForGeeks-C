#include <stdio.h>

void stream_median(int a[], int n);

int main(){
  int a[20], n, i=0;
  scanf("%d", &n);
  for(;i<n; i++)
    scanf("%d", &a[i]);
  stream_median(a, n);
  return 0;
}

void stream_median(int a[], int n){
  int i, k, j;
  printf("%d\n", a[0]);
  for (i = 1; i < n; i++)
  {
    k = a[i];
    j = i-1;
    while(j>=0 && a[j]>k){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = k;
    if(i%2)
      printf("%d\n", (a[(i+1)/2]+a[(i/2)])/2);
    else
      printf("%d\n", a[i/2]);
  }
}
