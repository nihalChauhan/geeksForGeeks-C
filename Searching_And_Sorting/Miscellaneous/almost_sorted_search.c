#include <stdio.h>

int binarySearch(int a[], int beg, int end, int k);

int main() {
  int a[20], n, i, k, p;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  p = binarySearch(a, 0, n-1, k);
  if(p == -1)
    printf("Not Found\n");
  else
    printf("Found at : %d", p+1);
}

int binarySearch(int a[], int beg, int end, int k){
  if(beg<=end){
    int mid = beg + (end - beg)/2;
    if(a[mid] == k) return mid;
    if(a[mid-1] == k) return mid-1;
    if(a[mid+1] == k) return mid+1;

    if(a[mid]>k) return binarySearch(a, beg, mid-2, k);

    return binarySearch(a, mid+2, end, k);
  }
  return -1;
}
