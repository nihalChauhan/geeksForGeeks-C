#include <stdio.h>

int main(){
  int a[20], n, i, k, p, beg, end, mid;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  if(a[0] == k){
    printf("Found at : 1\n");
    return 0;
  }

  i = 1;
  while(i<n && a[i]<=k)
    i = i*2;

  beg = i/2;
  end = (i<n) ? i:n-1;
  mid = (beg + end)/2;
  while(beg <= end){
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
  printf("Not found\n");
}
