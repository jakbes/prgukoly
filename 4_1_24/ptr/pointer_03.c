#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  q = 220;   /* pøiøadí q hodnotu 220 */
  p = &q;    /* pøiøadí p adresu q */
  
  printf("%d\n", p);    /* zobrazí adresu, na kterou p ukazuje */
  printf("%d\n", *p);
  *p++;                /* (*p)++; */
  printf("%d\n", *p);  /* zobrazí q pomocí ukazatele (*p)++, 
                          nebo adresu nového prvku *p++; */
  printf("%d\n", q);   /* zobrazí pøímo hodnotu q */
  return 0;
}
