#include <stdio.h>
#include <stdlib.h>//atoi(), atof()
#include <locale.h>//setlocale()
#include <math.h>  //M_PI
#include <ctype.h> //tolower()
#include <string.h>

int main(int argc, char *argv[]) { //koule, kvadr
	setlocale(LC_ALL, "");
	char prikaz[15];
	char hodnota[15];
	double polomer;
	int a,b,c,i;
	
	while(1){
		printf("Zvolte tvar - koule nebo kvadr: ");
		gets(prikaz);
		for(i=0;prikaz[i];i++){ //prikaz[i je stejny jako prikaz[i] == 0
			if(prikaz[i] >= 'A' && prikaz[i] <= 'Z'){
				prikaz[i] = tolower(prikaz[i]);
			}
		}
		
		if(!strcmp(prikaz, "koule")){  //objem, povrch
			printf("Zvolte jestli objem neboo povrch: ");
			gets(prikaz);
			for(i=0;prikaz[i];i++){ //prikaz[i] je stejny jako prikaz[i] == 0
			if(prikaz[i] >= 'A' && prikaz[i] <= 'Z'){
				prikaz[i] = tolower(prikaz[i]);
			}
			
			if(!strcmp(prikaz, "objem")){
				printf("Zadej polomer koule: ");
				gets(hodnota);
				polomer=atof(hodnota);
				printf("Koule o polomeru %.2lf má objem %.3lf\n", polomer, 4.0/3.0*M_PI*polomer*polomer*polomer);
			}
			else if(!strcmp(prikaz, "povrch")){
				printf("Zadej polomer koule: ");
				gets(hodnota);
				polomer=atof(hodnota);
				printf("Koule o polomeru %.2lf má povrch %.3lf\n", polomer, 4.0/3.0*M_PI*polomer*polomer);
			}
			else{
				
			}
		}
		}
		else if(!strcmp(prikaz, "kvadr")){  //objem, povrch
			printf("Zvolte jestli objem neboo povrch");
			gets(prikaz);
			for(i=0;prikaz[i];i++){ //prikaz[i je stejny jako prikaz[i] == 0
			if(prikaz[i] >= 'A' && prikaz[i] <= 'Z'){
				prikaz[i] = tolower(prikaz[i]);
			}
		}
			if(!strcmp(prikaz, "objem")){
				printf("Zadej stranu a,b,c: ");
				gets(hodnota);
				a=atoi(hodnota);
				gets(hodnota);
				b=atoi(hodnota);
				gets(hodnota);
				c=atoi(hodnota);
				printf("Kvadr o stranach %d %d %d má objem %.3lf\n", a,b,c, (double)a*b*c);
			}
			else if(!strcmp(prikaz, "povrch")){
				printf("Zadej stranu a,b,c: ");
				gets(hodnota);
				a=atoi(hodnota);
				gets(hodnota);
				b=atoi(hodnota);
				gets(hodnota);
				c=atoi(hodnota);
				printf("Kvadr o stranach %d %d %d má povrch %.3lf\n", a,b,c, (a*b)+(c*b)+(a*c));
			}
			else{
				printf("Dokonil jste to!!!!!!!");	
			}
		}
		else{
			printf("Dokonil jste to!!!!!!!");
		}
		
		
		printf("Chcete ukoncit program? (Ano/Ne)");
		gets(prikaz);
		for(i=0;prikaz[i];i++){ //prikaz[i je stejny jako prikaz[i] == 0
			if(prikaz[i] >= 'A' && prikaz[i] <= 'Z'){
				prikaz[i] = tolower(prikaz[i]);
			}
		}
		if(!strcmp(prikaz, "ano")){
			break;
		}
	}
		return 0;
}

/**/
