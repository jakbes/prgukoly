#include <stdio.h>
#include <stdlib.h>

struct s_type{
  int i;
  char ch;
  int *p;
  double d;
}s;

int main(void)
{
  printf("s_type ma delku %d bytu\n", sizeof(struct s_type));
  system("PAUSE");	
  return 0;
}
