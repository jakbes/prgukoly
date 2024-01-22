#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vstup.h"
#include  "KVZ.h"
#include "telesa.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,D;
	double polomer;
	setlocale(LC_ALL, "");
	char volba;
	
	printf("Zvolte - k (kvadr. rovnice) | t - telesa");
	nactiChar(&volba);getchar();
	printf("Zvolils %c", volba);
	
	if(volba == 'k' || volba == 'K'){// vypocet kv. rovnice
		printf("Nacti a ");
		nactiInt(&a);
		if(a != 0){
			printf("Zadej b,c: ");
			nactiInt(&b);
			nactiInt(&c);
			D = diskr(a,b,c);
			printf("Diskriminace je %d\n", D);
		if(D>0){
			printf("Koren je %.3lf\n", Re(a,b)+Im(a,D));
			printf("Koren je %.3lf\n", Re(a,b)-Im(a,D));
		}
		else if(D == 0){
			printf("Koren je %.3lf\n", Re(a,b));
		}
		else{
			printf("Koren je %.3lf + %.3lf\n", Re(a,b),Im(a,D));
			printf("Koren je %.3lf - %.3lf\n", Re(a,b),Im(a,D));
		}
		
	}
	}
	else if(volba == 't' || volba == 'T'){ // vypocet teles
			printf("Vyberte teleso g - gula | d (kostka)");
			nactiChar(&volba);getchar();
			
			if(volba == 'g' ||volba == 'G'|| volba == '6'){
				printf("Zvolte O(objem) |P(povrch)");
				nactiChar(&volba); getchar();
				if(volba == 'o' ||volba == 'O'){
					printf("Zadejte polomer: ");
					nactiDouble(&polomer);
					printf("Objem koule je %.3lf", Vkoule(polomer));
				}
				else if(volba == 'p' ||volba == 'P'){
					printf("Zadejte polomer: ");
					nactiDouble(&polomer);			
					printf("Povrch koule je %.3lf", Pkoule(polomer));
				}
				else{
					printf("%s\n", CHYBA);
				}
			}
			else if(volba == 'd' ||volba == 'D'){
				printf("Zvolte O(objem) |P(povrch)");
				nactiChar(&volba); getchar();
				if(volba == 'p' ||volba == 'P'){
					printf("Zadejte 3 strany");
					nactiInt(&a);
					nactiInt(&b);
					nactiInt(&c);
					printf("Povrch kvardu je %d\n", Skvadr(a,b,c));
				}
				else if(volba == 'o' ||volba == 'O'){
					printf("Zadejte 3 strany");
					nactiInt(&a);
					nactiInt(&b);
					nactiInt(&c);
					printf("Objem kvardu je %d\n",Vkvadr(a,b,c) );	
				}
				else{
					printf("%s", CHYBA);
				}

			}
			else{
				printf("%s\n", CHYBA);
			}
	}
	else{
		printf("%s\n", CHYBA);
	}
	return 0;
}
