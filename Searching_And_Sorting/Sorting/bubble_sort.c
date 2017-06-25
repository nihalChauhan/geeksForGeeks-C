#include <stdio.h>

void swap(int *x, int *y);

int main()
{
  int a[20], n, i, j, min_i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  for(i=0; i<n-1; i++)
    for(j=0; j<n-i-1; j++)
      if(a[j] > a[j+1])
        swap(&a[j], &a[j+1]);

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
