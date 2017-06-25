#include <stdio.h>

int main()
{
  int a[20], n, i, j, k;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  for (i = 1; i < n; i++)
  {
    k = a[i];
    j = i-1;
    while(j>=0 && a[j]>k){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = k;
  }

  printf("Sorted array:");

  for (i=0; i < n; i++)
    printf(" %d", a[i]);

  return 0;
}
