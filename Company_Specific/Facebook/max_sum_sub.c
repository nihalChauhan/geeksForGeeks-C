#include <stdio.h>

int find_max(int a[20], int n);

int main(){
  int a[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("%d\n", find_max(a, n));
  return 0;
}

int find_max(int a[20], int n){
  int i;
  int max, sum=0;
  sum = max = a[0];
  for(i=1; i<n; i++){
    sum+=a[i];
    if(sum<0)
      sum = 0;
    if(sum>max)
      max=sum;
  }
  return max;
}
