#include <stdio.h>
#include <stdlib.h> //atoi()

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fr;
	int c,a='*', i = 0, cislo[10]={0,0,0,0,0,0,0,0,0}, j=0;
	char hodnota[11];
	
	if((fr = fopen("doc29.txt","r"))== NULL){
		printf("Soubor neexistuje!!!!!!\n");
		return 1;
	}
	
	while((c = getc(fr))!= EOF){
		if(c>= '0' && c <= '9'){
			hodnota[i] = c;
			hodnota[i+1]= '\0';
			i++;
		}
		if((a >= '0' &&  a <= '9')&&(c < '0' || c >'9')){
			cislo[j] = atoi(hodnota);
			j++;
			i=0;
		}
		a = c;
	}
	//text - koupil jsem 15 rohliku po 3 korunach, napsat utratu;
	for(i=0; i<10; i++){
		printf("Hodnota je %d\n", cislo[i]);
	}	
	
//	printf("Skutecna hodnota je: %d\n", cislo);
	
	if(fclose(fr) == EOF){
		printf("Soubor nelze zavrit!!!!!!\n");
		return 2;
	}
	
	return 0;
}
