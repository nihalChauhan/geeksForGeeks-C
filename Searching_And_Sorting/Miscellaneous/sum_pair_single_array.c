#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
  int a[20], n, i, rl, rr, l, r, x, diff;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  scanf("%d", &x);

  r = n-1;
  l = 0;
  diff = INT_MAX;
  while(r>l){
      if(abs(a[l]+a[r]-x) < diff){
        rl = l;
        rr = r;
        diff = abs(a[l]+a[r]-x);
      }
      if(a[l]+a[r] > x)
        r--;
      else l++;
  }
  printf("The Closest Pair : %d %d\n", a[rl], a[rr]);
  return 0;
}
