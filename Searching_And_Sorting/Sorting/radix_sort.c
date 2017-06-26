#include <stdio.h>
#include <string.h>

void countSort(int a[], int n, int e);
void radixSort(int a[], int n);
int getMax(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  radixSort(a, n);

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

  for(i=0; a[i]; i++){
    output[count[ (a[i]/e)%10 ]-1] = a[i];
    --count[(a[i]/e)%10];
  }

  for(i=0; a[i]; i++)
    a[i] = output[i];
}

void radixSort(int a[], int n, int e){
  int m = getMax(a, n);

  for(int e=1; m/e > 0; e*=10)
    countSort(a,n,e);
}

int getMax(int a[], int n){
  int m = a[0];
  for(int i=1; i<n; i++)
    if(a[i] > m) m = a[i];
  return m;
}
