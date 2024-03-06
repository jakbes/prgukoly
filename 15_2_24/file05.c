#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int pocet = 0; 
  int c;
  FILE *fr;
  
  if((fr = fopen("text4.txt","r")) == NULL){ /* test otevøení */
    printf("Soubor se nepodarilo otevrit.\n");
    return 1;
  }
  
  while((c = getc(fr)) != EOF){ /* pøeètení souboru */
    if(c == ' ' || c == '\n')
      pocet++;
  }
  pocet++;   /* pøipoètení EOF */  
  printf("Pocet slov je %d\n", pocet); /* výpis poètu */
   
  if (fclose(fr) == EOF){  /* test zavøení */
    printf("Soubor se nepodarilo zavrit.\n");
    return 1;
  }
    
  return 0;
}
