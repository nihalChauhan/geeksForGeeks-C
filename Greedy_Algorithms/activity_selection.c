#include <stdio.h>

void select_activity(int s[], int f[], int n);

int main(){
  int n, i;
  int s[10], f[10];
  //Enter number of Activities
  scanf("%d", &n);

  //Enter Start times
  for(i=0; i<n; i++)
    scanf("%d", &s[i]);
  //Enter Finish times
  for(i=0; i<n; i++)
    scanf("%d", &f[i]);

  select_activity(s, f, n);
  return 0;
}

void select_activity(int s[], int f[], int n){
  int i, j;
  i=0;
  printf("Selected Activities : %d", i+1);
  for(j=1; j<n; j++){
    if(s[j]>=f[i]){
      printf(" %d", j+1);
      i = j;
    }
  }
}
