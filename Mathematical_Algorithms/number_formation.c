#include<stdio.h>

int factorial(int n);
int get_sum(int arr[],int n);

int main(){
  int a[20], n;
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

  printf("%d\n", get_sum(a, n));
  return 0;
}

int factorial(int n){
  int f = 1;
  if (n==0||n==1)
    return 1;
  for (int i=2; i<=n; i++)
    f = f*i;
  return f;
}

int get_sum(int arr[],int n)
{
  int fact = factorial(n);
  int digitsum = 0;
  for (int i=0; i<n; i++)
    digitsum += arr[i];
  digitsum *= (fact/n);

  int res = 0;
  for (int i=1, k=1; i<=n; i++){
    res  += (k*digitsum);
    k = k*10;
  }
  return res;
}
