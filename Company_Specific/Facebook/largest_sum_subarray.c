#include <stdio.h>

int find_max_k(int a[20], int n, int k);

int main(){
  int a[20], n, k, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &k);
  printf("%d\n", find_max_k(a, n, k));
  return 0;
}

int find_max_k(int a[20], int n, int k){
  int i;
  int max, sum=0;
  for(i=0; i<k; i++)
    sum+=a[i];
  max = sum;
  for(i=k; i<n; i++){
    sum+=a[i];
    sum-=a[i-k];
    if(sum>max)
      max=sum;
  }
  return max;
}
