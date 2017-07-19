#include <stdio.h>

int find_count(int a[20], int n, int k);

int main(){
  int a[20], n, k, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &k);
  printf("%d\n", find_count(a, n, k));
  return 0;
}

int abs(int x){
  return x<0? -1*x : x;
}

int find_count(int a[20], int n, int k){
  int i, j;
  int count, sum;
  count=sum=0;
  for(i=0; i<k; i++)
    sum+=a[i];
  if(sum%k==0)
    count++;
  for(i=1; i<n; i++){
    sum=0;
    for(j=0; j<i; j++)
      sum+=a[j];
    if(abs(sum)%k==0)
      count++;
    for(;j<n; j++){
      sum+=a[j];
      sum-=a[j-i];
    if(abs(sum)%k==0)
      count++;
    }
  }
  return count;
}
