#include <stdio.h>
#include <string.h>

int main(){
  char a[20];
  fgets(a, 20, stdin);
  int sum, i, k;
  int n = strlen(a);
  while(i<n){
    if(a[i]>='0' && a[i]<='9'){
      sum = 0;
      k = 1;
      while(a[i]>='0' && a[i]<='9'){
        if(a[i]=='9'){
          k=0;
        }
        sum = (sum*10)+(int)a[i]-48;
        i++;
      }
      if(k)
        printf("%d\n", sum);
    }
    else
      i++;
  }
  return 0;
}
