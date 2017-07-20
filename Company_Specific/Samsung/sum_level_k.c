#include <stdio.h>

int main(){
  int k,i,lvl,ans;
  char t[50];
  scanf("%d%s", &k, t);

  lvl=-1;
  ans=0;
  for(i=0;t[i]!='\0';i++)
  {
    if(t[i]=='(')
      lvl++;
    else if(t[i]==')')
      lvl--;
    else{
      if(lvl==k)
        ans+=(t[i]-'0');
    }
  }
  printf("%d\n", ans);
  return 0;
}

/*
input : 2
          (0(5(6()())(4()(9()())))(7(1()())(3()())))
output: 14
*/
