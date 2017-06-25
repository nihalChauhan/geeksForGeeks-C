#include <stdio.h>

void swap(int *x, int *y);

int main()
{
  int a[20], n, i, j, min_i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n-1; i++)
  {
    min_i = i;
    for (j = i+1; j < n; j++)
      if (a[j] < a[min_i])
        min_i = j;

    swap(&a[min_i], &a[i]);
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
