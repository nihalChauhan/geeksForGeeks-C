#include <stdio.h>

int binomial_coef(int n, int k);

int main(){
  int n, k;
  scanf("%d", &n);
  scanf("%d", &k);
  printf("Binomial Coef. : %d", binomial_coef(n, k));
  return 0;
}

int binomial_coef(int n, int k){
  int i, j;
  int c[k+1];
  for(i=0; i<=k; i++)
    c[i] = 0;
  c[0]=1;
  for(i=1; i<=n; i++)
    for(j=(i<k?i:k); j>0; j--)
      c[j] = c[j] + c[j-1];
  return c[k];
}
