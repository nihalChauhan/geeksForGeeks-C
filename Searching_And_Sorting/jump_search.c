#include <stdio.h>

int floorSqrt(int x);

int main() {
  int a[20], i, n, k, m, j;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Sorted Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  m = floorSqrt(n);
  i = 0;
  while(m < n){
    if(k >= a[i] && k < a[m]){
      for(j=i; j<m; j++){
        if(a[j] == k){
          printf("Found at : %d\n", j+1);
          return 0;
        }
      }
    }
    i=m;
    m+=m;
  }

  for(j=i; i<n; i++){
    if(a[j] == k){
      printf("Found at : %d\n", j+1);
      return 0;
    }
  }

  printf("Not found\n");
}

int floorSqrt(int x)
{
    if (x == 0 || x == 1)
       return x;

    int i = 1, r = 1;
    while (r < x)
    {
       if (r == x)
          return r;
       i++;
       r = i*i;
    }
    return i-1;
}
