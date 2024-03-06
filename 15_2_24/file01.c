#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pole[5]; /* index pole vždy od 0 */
  int i;
  FILE *fw;  /* FILE - datový typ pro práci se soubory */
             /* *-nutná, fw - promìnná pro zápis */
  printf("Zadejte 5 prvku pole:\n");

  fw = fopen("text1.txt","a");/* otevøení souboru pro r || w || a */

  for(i = 0; i < 5; i++)
    scanf("%d", &pole[i]);  /* naètení hodnot do "pole" */

  for(i = 0; i < 5; i++)    /* zápis hodnot do souboru */
    fprintf(fw,"prvek pole %d\n", pole[i]);

  fclose(fw);           /* uzavøení souboru */

  return 0;
}
