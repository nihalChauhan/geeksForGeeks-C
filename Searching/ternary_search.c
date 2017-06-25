#include <stdio.h>

int ternarySearch(int arr[], int l, int r, int x);

int main() {
  int a[20], n, i, k, p;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  p = ternarySearch(a, 0, n-1, k);
  if(p)
    printf("Found at : %d\n", p+1);
  else
    printf("Not Found\n");
}


int ternarySearch(int arr[], int l, int r, int x)
{
  if (r >= l)
  {
    int mid1 = l + (r - l)/3;
    int mid2 = mid1 + (r - l)/3;

    if (arr[mid1] == x)  return mid1;

    if (arr[mid2] == x)  return mid2;

    if (arr[mid1] > x) return ternarySearch(arr, l, mid1-1, x);

    if (arr[mid2] < x) return ternarySearch(arr, mid2+1, r, x);

    return ternarySearch(arr, mid1+1, mid2-1, x);
  }
  return -1;
}
