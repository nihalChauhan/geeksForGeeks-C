#include <stdio.h>
#include <string.h>

long long int get_rank(char a[27]);

int main(){
  char a[27];
  scanf("%s", a);
  printf("%lld\n", get_rank(a));
  return 0;
}

long long int get_rank(char a[27]){
  int n = strlen(a);
  long long int fact[n];
  int c[256] = {0};
  int i;
  fact[0] = 1;
  for(i=1; i<n; i++)
    fact[i] = i * fact[i-1];

  for(i=0; i<n; i++)
    c[(int)a[i]]++;

  for(i=1; i<256; i++)
    c[i]+=c[i-1];

  long long int rank = 0;
  for(i=0; i<n; i++){
    rank += (c[(int)a[i]-1] * fact[n-i-1]);
    for(int j=(int)a[i]; j<256; j++)
      c[j]--;
  }
  return rank+1;
}
