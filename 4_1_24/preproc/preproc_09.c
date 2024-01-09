#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Preklad souboru %s, dne %s, v %s\n", __FILE__, __DATE__, __TIME__);
  return 0;
}
