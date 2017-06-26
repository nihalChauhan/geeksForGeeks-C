#include<stdio.h>

void merge(int l[], int r[], int a[], int m, int n);
void divide(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

	divide(a,n);

  printf("Sorted array :");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);

	return 0;
}


void merge(int l[], int r[], int a[], int m, int n)
{
	int i,j,k;
	i = j = k = 0;

	while(i<m && j<n)
	{
		if(l[i]<r[j])
			a[k++]=l[i++];
		else
			a[k++]=r[j++];
	}

	while(i<m)
		a[k++]=l[i++];

	while(j<n)
		a[k++]=r[j++];
}

void divide(int a[], int n)
{
	int i, l[n/2], r[n-n/2];
	if(n<=1)
		return;

	for(i=0;i<n/2;i++)
		l[i]=a[i];

	for(i=n/2;i<n;i++)
		r[i-n/2]=a[i];

	divide(l, n/2);
	divide(r, n-n/2);
	merge(l, r, a, n/2, n-n/2);
}
