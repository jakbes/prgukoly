#include <stdio.h>
#include <stdlib.h>

#define CHAR_SET 256  /* 128 */

int main(void)
{
  int i;
#if CHAR_SET == 256
  printf("Zobrazeni uplne sady ASCII\n");
#else
  printf("Zobrazeni redukovane sady ASCII\n");
#endif

  for(i = 0;i < CHAR_SET;i++)
    printf("%c\n", i);
	
  return 0;
}
