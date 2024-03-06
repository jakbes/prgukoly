#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5];         /* index pole vždy od 0 */
  int i = 0, j = 0;    /* definice promìnných */
  FILE *fw, *fr;       /* FILE - datový typ pro práci se soubory */
   
  fr = fopen("text3.txt","r");  /* otevøení souboru pro ètení */
  fw = fopen("kopie3.txt","w"); /* otevøení souboru pro zápis */
  
  while(j < 5){
    pole[i] = getc(fr);
    i++;                  /* zvýšení indexu pole */
    j++;                  /* 5 prvkù */
  }
  
  for(i = 0; i < 5; i++)    /* i = 0 je zde vhodné */
    fprintf(fw,"prvek pole %c\n", pole[i]);
                            /* zápis hodnot do souboru */
  fclose(fw);                /* uzavøení souboru pro zápis*/
  fclose(fr);                /* uzavøení souboru pro ètení*/

  return 0;
}
