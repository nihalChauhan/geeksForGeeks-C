#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int longestIS(int a[], int n);

int main(){
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  printf("Length : %d\n", longestIS(a,n));
  return 0;
}

int longestIS(int a[], int n){
  int max, i, j;
  int *l;
  l = (int*) malloc (sizeof(int)*n);
  for(i=0; i<n; i++)
    l[i] = 1;
  for(i=1; i<n; i++)
    for(j=0; j<i; j++)
      if(a[i]>a[j] && l[i]<l[j]+1)
        l[i]=l[j]+1;
  max = INT_MIN;
  for(i=0;i<n;i++)
    if(max<l[i])
      max = l[i];
  return max;
}
