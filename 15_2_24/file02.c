#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5]; /* index pole vždy od 0 */
  int i;
  FILE *fw, *fr;  /* FILE - datový typ pro práci se soubory */
  
  fr = fopen("text2.txt","r");/* otevøení souboru pro ètení */
  fw = fopen("kopie2.txt","w");/* otevøení souboru pro zápis */
  
  for(i = 0; i < 5; i++)
    fscanf(fr,"%d", &pole[i]);  /* naètení hodnot do "pole" */
  
  for(i = 0; i < 5; i++)    /* zápis hodnot do souboru */
    fprintf(fw,"prvek pole %d\n", pole[i]);
    
  fclose(fw);           /* uzavøení souboru */
  fclose(fr);

  return 0;
}
