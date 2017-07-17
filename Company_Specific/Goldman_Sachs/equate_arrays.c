#include <stdio.h>
#include <stdbool.h>

bool check_equal(int a[20], int b[20], int n, int m);
void quickSort(int a[], int beg, int end);
int partition(int a[], int beg, int end);
void swap(int *x, int *y);

int main() {
  int a[20], b[20], n, m, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &m);
  for(i=0; i<m; i++)
    scanf("%d", &b[i]);
  if(check_equal(a, b, n, m))
    printf("Equal\n");
  else
    printf("Not Equal\n");
  return 0;
}

bool check_equal(int a[20], int b[20], int n, int m){
  if(n!=m)
    return false;
  quickSort(a,0,n-1);
  quickSort(b,0,m-1);
  for(int i=0; i<n; i++)
    if(a[i]!=b[i])
      return false;
  return true;
}

void quickSort(int a[], int beg, int end){
  if(beg<end){
    int p = partition(a, beg, end);
    quickSort(a, beg, p-1);
    quickSort(a, p+1, end);
  }
}
int partition(int a[], int beg, int end){
  int i;
  int pivot = a[end];
  int j = beg - 1;
  for(i=beg; i<end; i++){
    if(a[i] <= pivot){
      j++;
      swap(&a[j], &a[i]);
    }
  }
  swap(&a[j+1], &a[end]);
  return j+1;
}

void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}
