#include <stdio.h>

int main()
{
  int a[20], b[20], c[20], n, m, o;
  int  i, j, k;
  //Enter Number of Elements
  scanf("%d", &n);

  //Enter Elements
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

  //Enter Number of Elements for second array
  scanf("%d", &m);

  //Enter Elements
  for(i=0;i<m;i++)
    scanf("%d", &b[i]);

  //Enter Number of Elements for third array
  scanf("%d", &o);

  //Enter Elements
  for(i=0;i<o;i++)
    scanf("%d", &c[i]);

  i=j=k=0;
  printf("Common Elements : ");
  while(i<n && j<m && k<o){
    if(a[i]==b[j] && b[j]==c[k]){
      printf(" %d", a[i++]);
      j++; k++;
    }
    else if(a[i]<b[j]) i++;
    else if(b[j]<c[k]) j++;
    else k++;
  }
  return 0;
}
