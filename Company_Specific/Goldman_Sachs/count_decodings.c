#include <stdio.h>
#include <string.h>

int get_count(char a[20], int n);

int main(){
  char a[30];
  scanf("%s", a);
  int n = strlen(a);
  printf("%d\n", get_count(a, n));
  return 0;
}

int get_count(char a[20], int n){
  int count[n+1];
  count[0] = count[1] = 1;
  for(int i=2; i<=n; i++){
    count[i]=0;
    if(a[i-1]>'0')
      count[i] = count[i-1];
    if(a[i-2]=='1' || (a[i-2]=='2' && a[i-1]<'7'))
      count[i] += count[i-2];
  }
  return count[n];
}
