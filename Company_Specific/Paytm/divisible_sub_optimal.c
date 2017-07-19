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

int fin_count(int a[], int n, int k){
  int mod[k], i;
  for(i=0; i<k; i++)
    mod[i]=0;
  int sum = 0;
  for (int i=0; i<n; i++){
    sum+=a[i];
    mod[((sum%k)+k)%k]++;
  }

  int result = 0;

  for(int i=0; i<k ; i++)
    if (mod[i] > 1)
      result += (mod[i]*(mod[i]-1))/2;

  result += mod[0];
  return result;
}
