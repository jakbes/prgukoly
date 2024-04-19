#include <stdio.h>
#include <stdlib.h>
#include "struktura.h"

#define POCET 3

struct miry osoba[POCET], *p;
FILE *fa;
int main(int argc, char *argv[]) {
	int i;
	for(i =0; i<POCET;i++){
		p = &osoba[i]; //otocny prepinac
		
		printf("Zadej jmeno: ");
		gets(p->jmeno);
		printf("Zadej prijmeni: ");
		gets(p->prijmeni);
		printf("Zadej hmotnost v kg: ");
		scanf("%d", &p->vaha);
		printf("Zadej vysku v cm: ");
		scanf("%d", &p->vyska); getchar();
		p->bmi = (double)(p->vaha)/((p->vyska/100.0)*(p->vyska/100.0));
	}
	for(i=0; i<POCET; i++){
		p = &osoba[i];
		printf("%s %s ma hmotnost %dkg, vysku %dcm a BMI %2lf\n", p->jmeno, p->prijmeni, p->vaha,p->vyska, p->bmi);
	}
	//fopen
	if((fa=fopen("lidi.txt","a"))==NULL){
		printf ("Soubor nelze otevrit!!!\n");
		exit(1);
	}
	for(i=0; i<POCET; i++){
		p = &osoba[i];
		fprintf(fa,"%s %s ma hmotnost %dkg, vysku %dcm a BMI %2lf\n", p->jmeno, p->prijmeni, p->vaha,p->vyska, p->bmi);
		p = &osoba[i];
	}
	
	if(fclose(fa)== EOF){
		printf("Soubor nelze uzavrit!!!!\n");
		exit(2);
	}
	
	return 0;
}
