#include <stdio.h>

void swap(int *x, int *y);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  for(i=0; i<n; i+=2){
    if(i>0 && a[i-1]>a[i])
      swap(&a[i-1], &a[i]);
    if(i<n-1 && a[i]<a[i+1])
      swap(&a[i+1], &a[i]);
  }

  printf("Sorted array:");

  for (i=0; i < n; i++)
    printf(" %d", a[i]);

  return 0;
}

void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}
