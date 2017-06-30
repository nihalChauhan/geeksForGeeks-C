#include <stdio.h>

struct deno{
  int val;
  int q;
};

void sort(struct deno d[], int n);

int main() {
  int n, x, t, i;
  struct deno d[10];
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &d[i].val);
    d[i].q = 0;
  }
  scanf("%d", &x);
  sort(d, n);
  t = x;
  i = 0;
  while(t!=0){
    if(t>=d[i].val){
      t-=d[i].val;
      d[i].q++;
    }
    else i++;
  }
  printf("Coin breakdown : \n");
  i = 0;
  while(x!=0){
    if(d[i].q){
      printf("%d units of %d\n", d[i].q, d[i].val);
      x -= (d[i].q * d[i].val);
      d[i].q = 0;
    }
    i++;
  }
  return 0;
}

void sort(struct deno d[], int n){
  int i, j, k;
  for (i = 1; i < n; i++)
  {
    k = d[i].val;
    j = i-1;
    while(j>=0 && d[j].val<k){
      d[j+1].val = d[j].val;
      j--;
    }
    d[j+1].val = k;
  }
}
