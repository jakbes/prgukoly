#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) ((i)>(j)) ? (i) : (j)
/* pokud bychom nedali promìnné do závorek a dosdili za nì výrazy
s rùznými operátory, nemusely by výsledky dávat požedované hodnoty */

int main(void)
{
  printf("vetsi je %d\n", MAX(1,2));
  printf("vetsi je %d\n", MAX(1, -1));
	
  return 0;
}
/* makro je pøevedeno na ("%d", i>j ? i : j);
                                1>2 ? 1 : 2); atd..
*/
