#include <stdio.h>
#include <stdlib.h>

struct s_type{
  int i;
  double d;
};

struct s_type f(void);

int main(void)
{
  struct s_type var1;        /*struktura var1 */
  var1 = f();  /* obsah struktury f() je pøiøazen do var1 */
  printf("%d %.3f\n", var1.i, var1.d);
  
  system("PAUSE");	
  return 0;
}

struct s_type f(void)
{
  struct s_type temp; /*}temp; struktury s_type*/
  
  temp.i = 100;       /* dosazení hodnot do struktury s_type */
  temp.d = 123.23;
  
  return temp;
}
