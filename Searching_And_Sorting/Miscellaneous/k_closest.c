#include <stdio.h>

void kClosest(int a[], int n, int x, int k);
int getCrossover(int a[], int beg, int end, int x);

int main()
{
  int a[20], n, i, x, k;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Number to search closest of
  scanf("%d", &x);
  //Enter Number of Elements Required
  scanf("%d", &k);

  kClosest(a, n, x, k);
  return 0;
}

void kClosest(int a[], int n, int x, int k){
  int left = getCrossover(a, 0, n-1, x);
  int right = left + 1;
  if(a[left] == x)
    left--;
  int count = 0;
  printf("List Of Closest Elements : ");
  while(left >= 0 && right<n && count<k){
    if(x - a[left] < a[right] - x)
      printf(" %d", a[left--]);
    else
      printf(" %d", a[right++]);
    count++;
  }
}

int getCrossover(int a[], int beg, int end, int x){
  if(a[end]<=x)
    return end;
  if(a[beg]>x)
    return beg;

  int mid = (beg + end)/2;
  if(a[mid]<=x && a[mid+1]>x)
    return mid;

  if(a[mid]<x)
    return getCrossover(a, mid+1, end, x);

  return getCrossover(a, beg, mid-1, x);
}
