#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct s_type{
    int i;
    int j;
  }s;
  
  int i;
  i = 10;
  s.i = 100;
  s.j = 101;
  
  printf("i=%d s.i=%d s.j=%d\n", i, s.i, s.j);
  system("PAUSE");	
  return 0;
}
