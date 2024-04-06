#include <stdio.h>
#include <stdlib.h>

int encode(int i);

int main(void)
{
  int i;
  int j = 1;
  
  i = encode(j);
  printf("zakodovana %d je %d\n",j, i);
  i = encode(i);
  printf("dekodovane i je %d\n", i);
  system("PAUSE");	
  return 0;
}

int encode(int i)
{
union crypt_type{
  int num;
  char c[2];
}crypt;

unsigned char ch;
crypt.num = i;

/* pøehození typù */
ch = crypt.c[0];
crypt.c[0] = crypt.c[1];
crypt.c[1] = ch;

return crypt.num;
}
/*
Unie jsou dùležité tam, kde je potøeba data interpretovat rozlišnými zpùsoby.
encode() je funkce, která zakóduje èíslo pomocí prohozením dvou nejnižších bitù.
stejnou funkci lze použít i pro dekódování èísla
*/
