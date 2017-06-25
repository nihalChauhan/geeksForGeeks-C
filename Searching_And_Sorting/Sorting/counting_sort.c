#include <stdio.h>
#include <string.h>
#define RANGE 255

void countSort(char a[]);

int main()
{
  char a[20];
  scanf("%s", a);

  countSort(a);

  printf("Sorted array: %s\n", a);
  return 0;
}

void countSort(char a[]){
  char output[strlen(a)];
  int count[RANGE + 1], i;
  memset(count, 0, sizeof(count));

  for(i=0; a[i]; i++)
    ++count[a[i]];

  for(i=1; i<=RANGE; ++i)
    count[i] += count[i-1];

  for(i=0; a[i]; i++){
    output[count[a[i]]-1] = a[i];
    --count[a[i]];
  }

  for(i=0; a[i]; i++)
    a[i] = output[i];
}
