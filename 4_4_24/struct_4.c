#include <stdio.h>
#include <stdlib.h>

#define MAX 80

struct s_type{
  char pole_1[MAX];
  char pole_2[MAX];
}s, *p;

int main(void)
{
  int i;
  p = &s;
  
  strcpy(p->pole_1, "Mam rad struktury");
  
  printf("\n%s\n", p->pole_1);    /* kontrolní výpis */
                 /* s.pole_1 */ 
  for(i = 0; i < MAX; i++){
    p->pole_2[i] = p->pole_1[i];
  }
  printf("\n%s\n", p->pole_2);
  system("PAUSE");	
  return 0;
}
