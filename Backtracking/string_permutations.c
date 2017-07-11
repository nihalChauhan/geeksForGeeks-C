#include <stdio.h>
#include <string.h>

void permute(char a[], int l, int r);

int main(){
  char a[20];
  scanf("%s", a);
  int n = strlen(a);
  permute(a, 0, n-1);
  return 0;
}

void swap(char *a, char *b){
  char t;
  t = *a;
  *a = *b;
  *b = t;
}

void permute(char a[], int l, int r){
  int i;
  if(l==r)
    printf("%s\n", a);
  else{
    for(i=l; i<=r; i++){
      swap(a+l, a+i);
      permute(a, l+1, r);
      swap(a+l, a+i);
    }
  }
}
