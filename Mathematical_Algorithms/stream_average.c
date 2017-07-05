#include <stdio.h>

int main(){
  int i, n;
  float a[20];
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%f", &a[i]);
  float avg=a[0];
  printf("%f\n", avg);
  for(i=1;i<n;i++){
    avg = (avg*(i) + a[i])/(i+1);
    printf("%f\n", avg);
  }
  return 0;
}
