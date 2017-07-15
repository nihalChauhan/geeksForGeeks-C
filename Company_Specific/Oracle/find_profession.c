#include <stdio.h>

char find_proffesion(int l, int p)
{
  if (l == 1)
    return 'e';
  if (find_proffesion(l-1, (p+1)/2) == 'd')
    return (p%2)? 'd':'e';

  return (p%2)? 'e':'d';
}

int main(void)
{
  int l, p;
  scanf("%d%d", &l, &p);
  find_proffesion(l, p)=='e'? printf("Engineer\n")
                            : printf("Doctor\n");
  return 0;
}
