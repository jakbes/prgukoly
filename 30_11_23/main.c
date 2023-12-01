#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy(), strcap(), strcmp(), strlen()
#include <locale.h>
#include <ctype.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	char prikaz[10];
	char hodnota[10];
	int cislo1, cislo2, i;
	char volba[10];
while(1){
	
	printf("Zadej pøíkaz (soucet, soucin, rozdil, podil)");
	gets(prikaz);
		
	if(!strcmp(prikaz, "soucet")){
		printf("Zadej 1. èíslo: ");
		gets(hodnota);
		cislo1=atoi(hodnota);
		printf("Zadej 2. èíslo: ");
		gets(hodnota);
		cislo2=atoi(hodnota);
		
		printf("%d + %d = %d", cislo1, cislo2, cislo1+cislo2);
	}
	else if(!strcmp(prikaz, "soucin")){
		printf("Zadej 1. èíslo: ");
		gets(hodnota);
		cislo1=atoi(hodnota);
		printf("Zadej 2. èíslo: ");
		gets(hodnota);
		cislo2=atoi(hodnota);
		
		printf("%d * %d = %d", cislo1, cislo2, cislo1*cislo2);
	}
	else if(!strcmp(prikaz, "rozdil")){
		printf("Zadej 1. èíslo: ");
		gets(hodnota);
		cislo1=atoi(hodnota);
		printf("Zadej 2. èíslo: ");
		gets(hodnota);
		cislo2=atoi(hodnota);
		
		printf("%d - %d = %d", cislo1, cislo2, cislo1-cislo2);
	}
	else if(!strcmp(prikaz, "podil")){
		printf("Zadej 1. èíslo: ");
		gets(hodnota);
		cislo1=atoi(hodnota);
		printf("Zadej 2. èíslo: ");
		gets(hodnota);
		cislo2=atoi(hodnota);
		
		if(cislo2 != 0 ){
			printf("%d / %d = %d", cislo1, cislo2, (double)cislo1/cislo2);
		}
		else{
			printf("0 nelze delit !!!!!!!!!!!!!!!!!!!");
		}
	}
	else{
		printf("Dokonil jste to");
	}

	
		printf("Chcete program ukonèit? (Ano/Ne)");
		gets(volba);
		for(i=0; volba[i];i++){
			if(volba[i] >= 'A' && volba[i]<= 'Z'){
				//volba[i]=tolower(volba[i]));
				volba[i]= volba[i]+('a'-'A');
			}
		}
		
		if(!strcmp(volba, "ano")){ //Ano, aNo, aNO, anO 
			break;
		}
	}
	return 0;
}




/*#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy(), strcap(), strcmp(), strlen()

int main(int argc, char *argv[]) {
	
	char text1[21]; // na 21. indexu je ukoncovaci znak
	char text2[21];
	char text3[41];
	
	printf("Zadej text1(max 20 znaku): \n");
	gets(text1);
	printf("Zadej text2(max 20 znaku): \n");
	gets(text2);

	strcpy(text3, text1);	
	strcat(text3, " ");
	strcat(text3, text2);
	
	printf("%s", text3);
	printf("rezetec ma delku %d znaku",strlen(text3));
	
	return 0;
}
int main(int argc, char *argv[]) {
	
	char text1[21]; // na 21. indexu je ukoncovaci znak
	char text2[21];
	char text3[41];
	int shoda;	//strcmp()
	printf("Zadej text1(max 20 znaku): \n");
	gets(text1);
	printf("Zadej text2(max 20 znaku): \n");
	gets(text2);
 
	shoda = strcmp(text1, text2);
	
	printf("rozdil znaku je %d\n", shoda);
	return 0;
}
int main(int argc, char *argv[]) {
	
	char text1[21]; // na 21. indexu je ukoncovaci znak
	char text2[21];
	char text3[41];
	
	int shoda;	//strcmp()
	
	printf("Zadej text1(max 20 znaku): \n");
	gets(text1);
	printf("Zadej text2(max 20 znaku): \n");
	gets(text2);
 
	shoda = strcmp(text1, text2);
	
	printf("rozdil znaku je %d\n", shoda);
	return 0;
}
	
	char text1[21]; // na 21. indexu je ukoncovaci znak
	int cislo;
	
	printf("Zadej cislo: ");
	gets(text1);
	
	cislo = atoi(text1);
	
	printf("Skutecna hodnota je %d", cislo);
	
*/
