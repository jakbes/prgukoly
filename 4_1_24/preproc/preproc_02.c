#include <stdio.h>
#include <stdlib.h>

void funkce(void);

int main(void)
{
  #define CISLO 223344
  
  funkce();
  return 0;
}

void funkce(void)
{
  printf("%d\n", CISLO);    
}
