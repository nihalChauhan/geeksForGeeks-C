#include <stdio.h>
#include <stdbool.h>

struct job{
  int id;
  int dl;
  int profit;
};

void sort(struct job a[], int n);
void job_schedule(struct job a[], int n);

int main(){
  int i, n;
  struct job a[10];
  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &(a[i].dl));
    a[i].id = i+1;
  }

  for(i=0; i<n; i++)
    scanf("%d", &(a[i].profit));


  job_schedule(a,n);
  return 0;
}

void sort(struct job a[], int n){
  int i, j;
  struct job k;
  for (i = 1; i < n; i++)
  {
    k = a[i];
    j = i-1;
    while(j>=0 && a[j].profit<k.profit){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = k;
  }
}

int min(int x, int y){
  return (x<y? x:y);
}

void job_schedule(struct job a[], int n){
  sort(a, n);
  int r[n], i, j;
  bool slot[n];

  for(i=0; i<n; i++)
    slot[i] = false;

  for(i=0; i<n; i++){
    for(j=min(n, a[i].dl)-1; j>=0; j--){
      if(slot[j]==false){
        r[j] = i;
        slot[j] = true;
        break;
      }
    }
  }
  printf("Scheduled jobs :");
  for(i=0; i<n; i++){
    if(slot[i])
      printf(" %d", a[r[i]].id);
  }
}
