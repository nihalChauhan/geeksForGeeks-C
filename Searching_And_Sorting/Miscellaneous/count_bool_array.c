#include <stdio.h>

int countOnes(int a[], int beg, int end);

int main()
{
  int a[20], n;
  int  i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  printf("Number of 1s : %d", countOnes(a, 0, n-1));
  return 0;
}

int countOnes(int a[], int beg, int end){
  int mid = beg + (end - beg)/2;
  if(mid == end || (a[mid]==1 && a[mid+1]==0))
    return mid+1;
  if(a[mid]==0)
    return countOnes(a,beg,mid-1);
  return countOnes(a,mid+1,end);
}
