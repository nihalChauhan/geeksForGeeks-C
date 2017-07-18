#include <stdio.h>

void find_pairs(int a[], int b[], int n, int m, int x);

int main(){
    int a[20], b[20], n, m, x, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
      scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i=0; i<m; i++)
      scanf("%d", &b[i]);

    scanf("%d", &x);
    find_pairs(a, b, n, m, x);
    printf("\n");
    return 0;
}

void find_pairs(int a[], int b[], int n, int m, int x){
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
      if (a[i] + b[j] == x)
        printf("(%d %d) ", a[i], b[j]);
}
