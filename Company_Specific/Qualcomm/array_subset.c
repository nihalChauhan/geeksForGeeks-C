#include <stdio.h>
#include <stdbool.h>

void quickSort(int a[], int beg, int end);
int partition(int a[], int beg, int end);
void swap(int *x, int *y);
bool check_sub(int a[20], int n, int b[20], int m);

int main()
{
  int a[20], n, b[20], m, i;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  scanf("%d", &m);
  for(i=0;i<m;i++)
    scanf("%d", &a[i]);

  if(check_sub(a, n, b, m))
    printf("YES\n");
  else
    printf("YES\n");
  return 0;
}

bool check_sub(int a[], int n, int b[], int m){
  int i=0, j=0;

  if(m < n)
    return 0;

  quickSort(a, 0, n-1);
  quickSort(b, 0, m-1);
  while( i<m && j<n ){
    if( a[j] <b[i] )
      j++;
    else if(a[j] == b[i]){
      j++;
      i++;
  }
  else if(a[j] > b[i])
    return 0;
  }
  if(i<n)
    return 0;
  else
    return 1;
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
