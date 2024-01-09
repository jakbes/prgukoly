#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[] = "Ukazatele jsou zabavne, ze?";
  char *p;
  int i;
  
  p = str;
  
  for(i = 0; p[i]; i++) /* p[i] - (p[i] != 0) */
    printf("%c", p[i]);
    
  //printf("\n%s\n",p);
    
  printf("\n\n");
  return 0;
}
/*
Ukazatel se indexuje jen tehy, ukazuje-li na pole
*/
