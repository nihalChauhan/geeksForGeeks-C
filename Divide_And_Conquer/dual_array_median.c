#include <stdio.h>

int find_median(int a[], int b[], int n);

int main()
{
  int a[20], b[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements of 1st sorted array
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Elements of 2nd sorted array
  for(i=0;i<n;i++)
    scanf("%d", &b[i]);

  printf("Median : %d\n", find_median(a,b,n));
}

int find_median(int a[], int b[], int n){
  int i, j, m1, m2, c;
  i=j=0;
  m1=m2=-1;
  for(c=0; c<=n; c++){
    m1 = m2;

    if(i==n){
      m2 = b[0];
      break;
    }
    if(j==n){
      m2 = a[0];
      break;
    }

    if(a[i]<b[j])
      m2 = a[i++];
    else
      m2 = b[j++];
  }
  return (m1+m2)/2;
}
