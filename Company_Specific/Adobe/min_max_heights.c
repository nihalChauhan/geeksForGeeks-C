#include <stdio.h>

int min_max_h(int a[], int n, int k);

int main(){
  int a[20], n, k, i=0;
  scanf("%d", &n);
  for(;i<n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &k);
  printf("%d\n", min_max_h(a, n, k));
  for(i=0;i<n; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}

int abs(int a){ return a<0? a*-1 : a; }

int min_max_h(int a[], int n, int k){
  int i, min, max;
  min = max = 0;
  for(i=1; i<n; i++){
    if(a[i]<a[min]) min = i;
    if(a[i]>a[max]) max = i;
  }

  int mx = a[max];
  int mn = a[min];
  max = min = 0;
  for (i=0; i<n; i++){
    if(abs((mx+mn) - 2*(a[i]+k))<=abs((mx+mn) - 2*(a[i]-k)))
      a[i] += k;
    else
      a[i] -= k;
    if(a[i]<a[min]) min = i;
    if(a[i]>a[max]) max = i;
  }
  return a[max]-a[min];
}
