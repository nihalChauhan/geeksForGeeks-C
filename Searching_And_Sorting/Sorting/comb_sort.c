#include <stdio.h>

void combSort(int a[], int n);
void swap(int *x, int *y);
int getGap(int gap);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  combSort(a, n);

  printf("Sorted array: ");
  for (i=0; i < n; i++)
    printf(" %d", a[i]);

  return 0;
}

void combSort(int a[], int n){
  int i, s = 1;
  int gap = n;
  while(gap!=1 || s == 1){
    gap = getGap(gap);
    s = 0;
    for(i=0; i<n-gap; i++){
      if(a[i]>a[i+gap]){
        swap(&a[i], &a[i+gap]);
        s = 1;
      }
    }
  }
}

void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}

int getGap(int gap){
  if(gap>1)
    return (gap*10)/13;
  else return 1;
}
