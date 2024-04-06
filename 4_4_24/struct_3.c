/* ukazatel na strukturu */
#include <stdio.h>
#include <stdlib.h>

struct s_type{
  int i;
  char c;
}s, *p; /* s - promìnná struktury, *p - ukazatel */

int main(void)
{
  p = &s;   /* pøiøazení adresy ukazateli */
  
  s.i = 10;   /* pøístu k i pomocí promìnné struktury */
  printf("i = %d\n", s.i); /* p->i */
  
  p->i = 20;  /* pøístup k i pomocí ukazatele */
  printf("i = %d\n", p->i); /* s.i */
  
  s.c = 'A';   /* pøístu k c pomocí promìnné struktury */
  printf("c = %c\n", s.c);
  
  p->c = 'B';  /* pøístup k c pomocí ukazatele */
  printf("c = %c\n", p->c);
  system("pause");	
  return 0;
}

