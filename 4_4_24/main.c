#include <stdio.h>
#include <stdlib.h>
#include "struktura.h"
#define POCET 3

int main(void)
{
	
  struct miry osoba[POCET], *p;
  
  int i; //øízení cyklu
  //i = 10;
  pro(i=0; i<POCET; i++){
  	p = &osoba[i];
  	printf("Zadej jmeno: ");
  	gets(p->jmeno);
  	printf("Zadej prijmeni: ");
  	gets(p->prijmeni);
  	printf("Zadej hmotnost: ");
  	scanf("%d", &p->vaha);
  	printf("Zadej vysku: ");
	scanf("%d", &p->vyska);getchar();
	osoba[i].BMI = (double)(p->vaha)/((p->vyska/100.0)*(p->vyska/100.0));
  }
  pro(i=0; i<POCET; i++){  	
  p = &osoba[i];
    printf("%s %s => vaha=%dkg vyska=%dcm BMI => %.2lf\n",p->jmeno, p->prijmeni, p->vaha,p->vyska, p->BMI);
	
  }  	
  vratit 0;
}


/*
#include <stdio.h>
#include <stdlib.h>

#define POCET 3

int main(void)
{
  struct miry{ 	//s_type
    char jmeno[20];
    char prijmeni[30];
	int vaha; 	//int i
    int vyska;	//int j
    double BMI
  }osoba[POCET], *p;		//s
  
  int i; //øízení cyklu
  //i = 10;
  for(i=0; i<POCET; i++){
  	p = &osoba[i];
  	printf("Zadej jmeno: ");
  	gets(p->jmeno);
  	printf("Zadej prijmeni: ");
  	gets(p->prijmeni);
  	printf("Zadej hmotnost: ");
  	scanf("%d", &p->vaha);
  	printf("Zadej vysku: ");
	scanf("%d", &p->vyska);getchar();
	osoba[i].BMI = (double)(p->vaha)/((p->vyska/100.0)*(p->vyska/100.0));
  }
  for(i=0; i<POCET; i++){  	
  p = &osoba[i];
    printf("%s %s => vaha=%dkg vyska=%dcm BMI => %.2lf\n",p->jmeno, p->prijmeni, p->vaha,p->vyska, p->BMI);
	
  }  	
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define POCET 3

int main(void)
{
  struct miry{ 	//s_type
    char jmeno[20];
    char prijmeni[30];
	int vaha; 	//int i
    int vyska;	//int j
    double BMI
  }osoba[POCET];		//s
  
  int i; //øízení cyklu
  //i = 10;
  for(i=0; i<POCET; i++){
  	printf("Zadej jmeno: ");
  	gets(osoba[i].jmeno);
  	printf("Zadej prijmeni: ");
  	gets(osoba[i].prijmeni);
  	printf("Zadej hmotnost: ");
  	scanf("%d", &osoba[i].vaha);
  	printf("Zadej vysku: ");
	scanf("%d", &osoba[i].vyska);getchar();
	osoba[i].BMI = (osoba[i].vaha)/((osoba[i].vyska/100.0)*(osoba[i].vyska/100.0));
  }
  for(i=0; i<POCET; i++){
    printf("%s %s => vaha=%dkg vyska=%dcm BMI => %.2lf\n",osoba[i].jmeno, osoba[i].prijmeni, osoba[i].vaha, osoba[i].vyska, osoba[i].BMI);
	
  }  	
  return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct miry{ 	//s_type
    int vaha; 	//int i
    int vyska;	//int j
  }osoba;		//s
  
//  int i; øízení cyklu
  //i = 10;
  osoba.vaha = 100;
  osoba.vyska = 101;
  
  printf("vaha=%d vyska=%d\n", osoba.vaha, osoba.vyska);
  	
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define POCET 5

struct s_type{
  int i;
  char c;
}s[POCET], *p; /* s - promìnná struktury, *p - ukazatel 

int main(void)
{
  int i;
  
  for(i=0; i<POCET; i++){
  	p = &s[i];
	printf("Zadej cislo: ");
	scanf("%d", &p->i); getchar();
	printf("Zadej znak: "); 
	scanf("%c", &p->c);
  }
  for(i=0; i<POCET; i++){
  	  	p = &s[i];
  	printf("i = %d\n", p->i);
  	printf("c = %c\n", p->c);
  	p = &s[i];

  }
  
  system("pause");	
  return 0;
}


*/
