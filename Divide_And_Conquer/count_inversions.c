#include<stdio.h>

int merge(int l[], int r[], int a[], int m, int n);
int divide(int a[], int n);

int main()
{
  int a[20], n, i;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  printf("Inversions : %d\n", divide(a,n));
}

int merge(int l[], int r[], int a[], int m, int n){
  int i,j,k,inv;
  i = j = k = inv = 0;

  while(i<m && j<n)
  {
    if(l[i]<r[j])
      a[k++]=l[i++];
    else{
      a[k++]=r[j++];
      inv += (m-i);
    }
  }

  while(i<m)
    a[k++]=l[i++];

  while(j<n)
    a[k++]=r[j++];

  return inv;
}

int divide(int a[], int n){
  int inv = 0;
  int i, l[n/2], r[n-n/2];
	if(n<=1)
		return inv;

	for(i=0;i<n/2;i++)
		l[i]=a[i];

	for(i=n/2;i<n;i++)
		r[i-n/2]=a[i];

	inv += divide(l, n/2);
	inv += divide(r, n-n/2);
	inv += merge(l, r, a, n/2, n-n/2);
  return inv;
}
