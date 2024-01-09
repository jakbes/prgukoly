#include <stdio.h>
#define LADENI 2   /*LADENI 2, LADENI 3*/

int main()
{
  #if LADENI==1
    printf("Provedla se 1.cast\n");
  #elif LADENI==2
    printf("Provedla se 2.cast\n");
  #elif LADENI==3
    printf("Provedla se 3.cast\n");
  #else
    printf("Nebyla provedena zadna cast\n");
  #endif

  return 0;
}
