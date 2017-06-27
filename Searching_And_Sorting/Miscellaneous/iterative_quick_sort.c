#include <stdio.h>

void quickSortIterative (int a[], int l, int h);
int partition (int a[], int l, int h);
void swap ( int* a, int* b );

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

	quickSortIterative(a,0,n-1);

  printf("Sorted array :");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);

	printf("\n");
	return 0;
}

void swap ( int* a, int* b )
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition (int a[], int l, int h){
  int x = a[h];
  int i = (l - 1);
  for (int j = l; j <= h- 1; j++){
    if (a[j] <= x){
      i++;
      swap (&a[i], &a[j]);
    }
  }
  swap (&a[i + 1], &a[h]);
  return (i + 1);
}

void quickSortIterative (int a[], int l, int h){
  int s[h-l+1];
  int top = -1;

  s[++top] = l;
  s[++top] = h;

  while ( top >= 0 ){
    h = s[top--];
    l = s[top--];

    int p = partition( a, l, h );

    if ( p-1 > l ){
      s[++top] = l;
      s[++top] = p - 1;
    }

    if ( p+1 < h ){
      s[++top] = p + 1;
      s[++top] = h;
    }
  }
}
