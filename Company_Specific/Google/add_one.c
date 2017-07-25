#include <stdio.h>
#include <stdlib.h>

int* add_one(int* a, int* n);

int main(){
  int n, i;
  scanf("%d", &n);
  int *a = (int*)malloc(sizeof(int)*n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  a = add_one(a, &n);
  for(i=0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int* add_one(int* a, int* n){
  int i = (*n)-1;
  while(i>=0){
    if(a[i]!=9)
      break;
    i--;
  }
  if(i!=-1){
    a[i++]+=1;
    for(;i<*n;i++)
      a[i]=0;
    return a;
  }
  int *ret = (int*)malloc(sizeof(int)*((*n)+1));
  ret[0] = 1;
  for(i=1; i<=(*n); i++)
    ret[i]=0;
  *n = (*n) + 1;
  return ret;
}
