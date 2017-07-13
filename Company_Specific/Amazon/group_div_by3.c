#include <stdio.h>

int group_div3(int arr[], int n);

int main(){
  int a[20], n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  printf("%d\n", group_div3(a, n));
  return 0;
}

int group_div3(int a[], int n){
  int c[3] = {0}, i;
  int res = 0;

  for(i=0; i<n; i++)
    c[a[i]%3]++;

  res += (c[0]*(c[0]-1))/2;
  res += c[1] * c[2];

  res += (c[0] * (c[0]-1) * (c[0]-2))/6;
  res += (c[1] * (c[1]-1) * (c[1]-2))/6;
  res += ((c[2]*(c[2]-1)*(c[2]-2))/6);
  res += c[0]*c[1]*c[2];

  return res;
}
