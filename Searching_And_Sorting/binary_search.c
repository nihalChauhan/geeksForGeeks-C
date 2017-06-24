#include <stdio.h>

int main() {
  int a[20], n, i, k, beg, mid, end;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  beg = 0;
  end = n-1;
  mid = (beg + end)/2;

  while(beg < end){
    if(a[mid]==k){
      printf("Found at : %d\n", mid+1);
      return 0;
    }
    else if(a[mid]>k)
      end = mid-1;
    else
      beg = mid+1;

    mid = (beg + end)/2;
  }
  printf("Not Found");
}
