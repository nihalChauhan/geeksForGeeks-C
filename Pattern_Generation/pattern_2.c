#include <stdio.h>

int main(){
  char a[20];
  int n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    a[i] = 'A'+i;
  a[n] = '\0';
  char *temp;
  temp = &a[n-1];
  for(i=0;i<n;i++)
    printf("%s\n", temp--);
  return 0;
}
