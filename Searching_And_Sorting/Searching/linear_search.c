#include <stdio.h>

int main() {
  int a[20], n, i, k;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Element to Be Searched
  scanf("%d", &k);

  for(i=0;i<n;i++)
    if(a[i]==k){
      printf("Found at : %d\n", i+1);
      return 0;
    }
    printf("Not Found\n");
}
