#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p, q;
  q = 199;   /* pøiøadí q hodnotu 199 */
  p = &q;    /* pøiøadí p adresu q */
  
  printf("%d\n", *p);  /* zobrazí q pomocí ukazatele */
  printf("%d\n", q);   /* zobrazí pøímo hodnotu q */
  printf("%d\n", p);   /* zobrazí adresu q */
  printf("%d\n", &p);  /* zobrazí adresu p */
  return 0;
}
/*
Promìnná p je deklarovaná jako ukazatel a q, která je
celé èíslo.Pak je q pøiøazena hodnota 199, na dalším øádku
je pomocí p = &q pøiøazena do p adresa promìnné q. 
Operátor & lze slovnì vyjádøit jako "adresa nìèeho".
Pomocí printf vypíšeme adresy a hodnoty promìnných.
*/
