#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fr, *fa;
	char hodnota[11];
	int c, i=0, pocet = 0, cislo[5], j=0, a='*';
	
	if((fr = fopen("ctvrtek.txt", "r"))==NULL){
		printf("Soubor nelze otevrit!\n");
		return 1;
	}
	//cteni ze souboru

	while(c = getc(fr)){
		if(c == '\n'){
			pocet++;
		}
		if(pocet == 5){
			break;
		}
		if(c >= '0'&& c <= '9'){
			hodnota[i]=c;
			hodnota[i+1]='\0';
			i++;
		}
		if((a>='0'&& a<='9')&&(c<'0'|| c>'9')){
			cislo[j] = atoi(hodnota);
			j++;
			i=0;
		}
		a = c;
	}
	
	if((fclose(fr))==EOF){
		printf("Soubor nelze zavrit!!!\n");
		return 2;	
	}
	//zpracovani dat ze soouboru
	printf("Sroubu je %d, cena za kus je %d", cislo[0], cislo[1]);
	
	if((fa = fopen("ctvrtek.txt", "a"))==NULL){
		printf("Soubor nelze otevrit!\n");
		return 3;
	}
	
	fprintf(fa,"Sroubu je %d, cena za kus je %d celkova utrata je %d" , cislo[0], cislo[1], cislo[0]*cislo[1]);
	
	if((fclose(fa))==EOF){
		printf("Soubor nelze zavrit!!!\n");
		return 4;	
	}
	//cislice vynechat, male zanechat, velke tolower
	return 0;
}
