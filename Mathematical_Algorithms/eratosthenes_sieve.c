#include <stdio.h>
#include <stdbool.h>

void eratosthenes(int n);

int main(){
  int n;
  scanf("%d", &n);
  eratosthenes(n);
  return 0;
}

void eratosthenes(int n){
  bool prime[n+1];
  int i, j;
  for(i=0; i<=n; i++)
    prime[i] = true;
  for(i=2; i*i<=n; i++)
    if(prime[i])
      for(j=i*2; j<=n; j+=i)
        prime[j] = false;
  for(i=2; i<=n; i++)
    if(prime[i])
      printf("%d ", i);
}
