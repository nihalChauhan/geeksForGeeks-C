#include <stdio.h>

void minSubArray(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  minSubArray(a, n);
  return 0;
}

void minSubArray(int a[], int n)
{
  int i, beg, end, max, min;
  for(i=0; i<n-1; i++){
    if(a[i]>a[i+1])
      break;
  }
  if(i == n-1){
    printf("Array already Sorted\n");
    return;
  }
  beg = i+1;

  for(i=n-1; i>=0; i--){
    if(a[i]<a[i-1])
      break;
  }
  end = i;
  max = a[beg];
  min = a[end];
  for(i=beg; i<=end; i++){
    if(a[i] > max)
      max = a[i];
    if(a[i] < min)
      min = a[i];
  }

  for(i=0; i<beg; i++){
    if(a[i] > min){
      beg = i;
      break;
    }
  }
  for(i=n-1; i>end; i--){
    if(a[i] < max){
      end = i;
      break;
    }
  }

  printf("Sub Araay To sort : ");
  for(i=beg; i<=end; i++)
    printf(" %d", a[i]);
}
