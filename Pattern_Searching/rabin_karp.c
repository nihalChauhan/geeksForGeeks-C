#include <stdio.h>
#include <string.h>
#define r 256

void search(char a[], char b[], int q);

int main(){
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  search(a, b, 97);
  return 0;
}

void search(char a[], char b[], int q){
  int i, j, h, p, t;
  int n = strlen(a);
  int m = strlen(b);
  h = 1;
  p = t = 0;
  for(i=0; i<m-1; i++)
    h = (h*r)%q;

  for(i=0; i<m; i++){
    p = (r*p + b[i])%q;
    t = (r*t + a[i])%q;
  }

  for(i=0; i<=n-m; i++){
    if(p == t){
      for(j=0; j<m; j++)
        if(a[i+j]!=b[j])
          break;
      if(j==m)
        printf("Pattern Found at : %d\n", i+1);
    }
    if(i<n-m){
      t = (r*(t-a[i]*h) + a[i+m])%q;
      if(t<0)
        t+=q;
    }
  }
}
