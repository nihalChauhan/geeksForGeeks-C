#include <stdio.h>

int main() {
  int a[20], n, i, k, hi, lo, pos;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);
  lo = 0;
  hi = n-1;

  while(lo <= hi && a[lo] <= k && k<=a[hi]){
    pos = lo + (( (double)(hi-lo) / (a[hi]-a[lo]) ) * ( k-a[lo] ));

    if(a[pos] == k){
      printf("Found at : %d\n", pos+1);
      return 0;
    }
    else if(a[pos] < k)
      lo = pos + 1;

    else
      hi = pos - 1;
  }
  return 0;
}
