#include <stdio.h>
#define PI 3.141592653
#define NA_2(x) (x)*(x)
#define OBJEM_VALCE(r,v) PI*NA_2(r)*v
#define ODDELOVAC for(i=1;i<=40;i++) printf("*");\
                  printf("\n");

float polomer,vyska;
int i;
int main()
{   
    ODDELOVAC
    printf("Zadej polomer a vysku valce\n");
    ODDELOVAC
    scanf(" %f %f",&polomer,&vyska);
    ODDELOVAC
    printf("Obem valce je %.2f * %.2f * %.2f = %.2f\n",PI,NA_2(polomer),vyska,OBJEM_VALCE(polomer,vyska));
    ODDELOVAC
    getch();
    return 0;
}
