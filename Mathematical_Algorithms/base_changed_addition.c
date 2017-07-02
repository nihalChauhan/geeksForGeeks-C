#include <stdio.h>
#include <string.h>

int get_value(char x, int b);
char get_char(int x, int b);
void add(char x[], char y[], char result[], int b);

int main(){
  int b;
  char x[10], y[10], r[10];

  scanf("%d",&b);
  scanf("%s", x);
  scanf("%s", y);

  add(x, y, r, b);
  printf("Result : %s\n", r);
  return 0;
}

void add(char x[], char y[], char result[], int b){
  int n = strlen(x);
  int temp, i, c;
  c=0;
  for(i=n-1; i>=0; i--){
    temp = get_value(x[i], b) + get_value(y[i], b) + c;
    if(temp>=b){
      c = 1;
      temp -= b;
    }
    result[i+1] = get_char(temp, b);
  }
  if(c)
    result[0] = '1';
  else
    result++;
}


int get_value(char x, int b){
  if(x>='0' && x<='9')
    return (x-'0');

  return (x-'A'+10);
}

char get_char(int x, int b){
  if(x>=0 && x<=9)
    return ('0'+x);

  return (x+'A'-10);
}
