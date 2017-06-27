#include <stdio.h>

void countSort(int a[], int n, int e);
void sort(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements in range 1 to (n^2-1)
  //For n^2, -1 on all before sorting, +1 after sorting
  //For n^3-1 range, call countingSort 3 times, with e = 1, n, n^2
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  sort(a, n);

  printf("Sorted array: ");
  for (i=0; i < n; i++)
    printf(" %d", a[i]);

  return 0;
}

void countSort(int a[], int n, int e){
  int output[n], i;
  int count[10]={0};

  for(i=0; i<n; i++)
    ++count[(a[i]/e)%10];

  for(i=1; i<10; ++i)
    count[i] += count[i-1];

  for(i=n-1; i>=0; i--){
    output[ count[(a[i]/e)%10] - 1 ] = a[i];
    --count[ (a[i]/e)%10 ];
  }

  for(i=0; i<n; i++)
    a[i] = output[i];
}

void sort(int arr[], int n)
{
    countSort(arr, n, 1);
    countSort(arr, n, n);
}
