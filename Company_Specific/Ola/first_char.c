#include <stdio.h>
#include <string.h>

void first_char(char a[100], char b[100]);

int main(){
  char a[100], b[10];
  fgets(a, 100, stdin);
  fgets(b, 10, stdin);
  first_char(a, b);
  return 0;
}

void first_char(char a[100], char b[100])
{
  int min=-1;

  for(int i=0; i<strlen(a); i++)
    for(int j=0; j<strlen(b); j++)
      if (a[i]==b[j] && j<min){
        min = j;
        break;
      }

  if (min!=-1)
    printf("%d\n", a[min]);
  else
    printf("None Found\n");
}
