#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
  int a[20], b[20], n, m, i, rl, rr, r, l, x, diff;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Number of Elements for second array
  scanf("%d", &m);

  //Enter Elements
  for(i=0;i<m;i++)
    scanf("%d", &b[i]);

  scanf("%d", &x);

  r = n-1;
  l = 0;
  diff = INT_MAX;
  while(l<m && r>=0){
      if(abs(a[l]+b[r]-x) < diff){
        rl = l;
        rr = r;
        diff = abs(a[l]+b[r]-x);
      }
      if(a[l]+b[r] > x)
        r--;
      else l++;
  }
  printf("The Closest Pair : %d %d\n", a[rl], b[rr]);
  return 0;
}
