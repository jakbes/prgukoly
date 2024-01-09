#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  p = &q;    /* pøiøadí p adresu q */
  *p = 199;  /* pøiøadí hodnotu do q pomocí ukazatele */
  
  printf("%d\n", *p);  /* zobrazí q pomocí ukazatele */
  printf("%d\n", q);   /* zobrazí pøímo hodnotu q */
  printf("%d\n", p);   /* zobrazí adresu q */
  printf("%d\n", &p);  /* zobrazí adresu p */
  return 0;
}
