#include <stdio.h>
#include <string.h>

int main(){
  int hash[256] = {0};
  int n, k, i;
  scanf("%d\n", &k);
  char s[100];

  scanf("%[^\t\n]s",s);
  n = strlen(s);

  for(i=0; i<n; i++)
    hash[(int)s[i]]++;

  int a=0;
  for(i=0; i<256; i++)
    if(hash[i]==k)
      a++;
  printf("%d\n", a);
  return 0;
}
