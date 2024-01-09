#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  p = &q;
  q = 10;    /* *p = 10; */
  
  printf("%d - %d\n", p, q);
  (*p)++;                      /* *p++; */
  printf("%d - %d\n", p, q);
  return 0;
}
