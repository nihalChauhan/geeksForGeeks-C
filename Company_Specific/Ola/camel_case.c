#include <stdio.h>
#include <string.h>

int main(){
  char a[100], b[10];
  fgets(a, 100, stdin);
  scanf("%[A-Z ]", b);

  int i, j, t, k;
  int n = strlen(a);
  int m = strlen(b);
  k=i=0;
  while(i<n){
    j=0;
    t=i;
    while(i<n && j<m){
      if(a[i]==b[j])
        j++;
      else if((a[i]==' ') || (a[i]>='A' && a[i]<='Z'))
        break;
      i++;
    }
    if(j==m){
      k=1;
      while(a[t]!=' ' && t<n-1)
        printf("%c", a[t++]);
      i=t;
      printf(" ");
    }
    else
      while(a[i++]!=' ');
  }
  if(!k)
    printf("None Found\n");
  else
    printf("\n");
  return 0;
}
