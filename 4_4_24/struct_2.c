#include <stdio.h>
#include <stdlib.h>

struct s_type{
  char str[80];
  char ch;
  double d;
  int i;
}s;

int main(void)
{
   
  printf("Zadejte znak:");
  scanf("%c", &s.ch);
  
  printf("\nZadejte realne cislo:");
  scanf("%lf", &s.d);
  
  printf("\nZadejte retezec:");
  scanf("%s", &s.str);
  
  printf("\nZadejte cele cislo:");
  scanf("%d", &s.i);
  
  printf("\nint-%d znak-%c double-%.3lf string-%s\n", s.i, s.ch, s.d, s.str);
  
  system("PAUSE");	
  return 0;
}
