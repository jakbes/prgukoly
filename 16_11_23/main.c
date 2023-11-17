#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define POCET 10


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int pole[10] = {10,20,30,40,50,60,70,80,90,100};	
	int i,j, pom;
	
	for(i=0; i<10;i++){
		printf("%d\n", pole[i]);
	}
	
	for(i = 0, j=9;i<10/2;i++){
		pom=pole[i];
		pole[i]=pole[j];
		pole[j]=pom;
		j--;
		
		
	}
	
	for(i = 0; i < 10; i++){
		printf("%d\n", pole[i]);
	}
	
	return 0;
}
/*
#define POCET 10
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int binar[8];
	int i, cislo = 0, bit = 1, hodnota, volba;
	
	printf("Zadej 2 to 10 èíslo 2, pro 10 to 2 èíslo 10: \n");
	scanf("%d",&volba);
	
	if(volba == 2){		
		for(i=0; i<POCET; i++){
			printf("Zadej %d. bit: ", i+1);
			scanf("%d", &binar[i]);
		}
	
		for(i=POCET-1; i>=0; i--){
			hodnota = binar[i] * bit; 
			cislo=cislo + hodnota; 
			bit = bit*2;
		}
			printf("Èíslo je %d\n", cislo);	
	}
	else if(volba == 10){
			printf("zadej cislo(0-255): ");
		scanf("%d", &cislo);
	
		for(i=POCET-1; i>=0;i--){
			binar[i]= cislo % 2;
			cislo=cislo/2;
		}
	
		for(i=0; i<POCET; i++){
			printf("%d", binar[i]);
		}
	
	}
	else{
		printf("Máte to blbì!!!!!!");
	}
		
	
	return 0;
}

*/
/*
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int binar[8];
	int i, cislo;
	
	printf("zadej cislo(0-255): ");
	scanf("%d", &cislo);
	
	for(i=7; i>=0;i--){
		binar[i]= cislo % 2;
		cislo=cislo/2;
	}
	
	for(i=0; i<8; i++){
		printf("%d", binar[i]);
	}
	
	putchar('\n');
	return 0;
}

*/
