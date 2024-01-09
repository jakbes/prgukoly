#include <stdio.h>
#include <stdlib.h>

#define LADENI   /* koment */
int main()
{
  #ifdef LADENI
    printf("Program je ve stadiu ladeni\n");
  #elif /* #else */
    printf("Nic se nebude ladit!\n");
  #endif

  #undef LADENI

  #ifndef LADENI
    printf("Ladeni bylo zruseno\n");
  #endif

  return 0;
}
