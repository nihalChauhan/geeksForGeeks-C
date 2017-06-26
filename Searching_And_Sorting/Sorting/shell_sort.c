#include <stdio.h>

void shellSort(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  shellSort(a, n);

  printf("Sorted array: ");
  for (i=0; i < n; i++)
    printf(" %d", a[i]);

  return 0;
}

void shellSort(int a[], int n){
  int gap, i, temp, j;
  for(gap=n/2; gap>0; gap/=2){
    for(i=gap; i<n; i++){
      temp = a[i];
      for(j=i; j>=gap && a[j-gap]>temp; j-=gap)
        a[j]=a[j-gap];

      a[j] = temp;
    }
  }
}
