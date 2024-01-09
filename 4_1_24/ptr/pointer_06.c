#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[] = {10, 20, 30, 40, 60, 60, 70, 80, 90, 100};
  int *p;
  p = pole;
  
  printf("%d - %d - %d\n", *p, *(p+1), *(p+2));
  printf("%d - %d - %d\n", pole[0], pole[1], pole[2]);
	
  return 0;
}
