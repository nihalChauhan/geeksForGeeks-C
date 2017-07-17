#include<stdio.h>

void reverse(char *begin, char *end);
void reverse_words(char *s);

int main()
{
  char s[100];
  fgets(s, 100, stdin);
  reverse_words(s);
  printf("%s\n", s);
  return 0;
}

void reverse_words(char *s){
  char *word_begin = NULL;
  char *temp = s;
  while( *temp ){
    if ((word_begin == NULL) && (*temp != ' ')){
      word_begin=temp;
    }
    if(word_begin && ((*(temp+1) == ' ') || (*(temp+2) == '\0'))){
      reverse(word_begin, temp);
      word_begin = NULL;
    }
    temp++;
  }
  reverse(s, temp-1);
}

void reverse(char *begin, char *end)
{
  char temp;
  while (begin < end)
  {
    temp = *begin;
    *begin++ = *end;
    *end-- = temp;
  }
}
