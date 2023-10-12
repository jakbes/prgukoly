#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // M_PI
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	double objem, polomer, povrch;

	printf("zadej polomer koule: ");
	scanf("%lf", &polomer);
	
	objem = 4.0/3.0*M_PI*polomer*polomer*polomer;
	povrch = 4.0*M_PI*polomer*polomer; 
	 
	printf("koule o polomeru %.2lf ma objem %.4lf\n", polomer, objem);
	printf("koule o polomeru %.2lf ma povrch %.4lf\n", polomer, povrch);
	
	return 0;
}

/*

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	double objem, polomer;

	printf("zadej polomer koule: ");
	scanf("%lf", &polomer);
	
	objem = 4.0/3.0*M_PI*polomer*polomer*polomer;
	
	printf("koule o polomeru %.2lf ma objem %.4lf\n", polomer, objem);
	
	return 0;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	char operace, volba;
	int cislo1, cislo2; 
	
	while(1){
	
		printf("Zadej operaci (+ - * /): ");
		operace = getchar();
		
		printf("Zadej 2 cisla: ");
		scanf("%d %d", &cislo1, &cislo2); getchar();
		
		switch(operace){
			case '+':  
				printf("%d + %d = %d\n", cislo1, cislo2, cislo1+cislo2);
				break;
			case '-':  
					printf("%d - %d = %d\n", cislo1, cislo2, cislo1-cislo2);
				break;
			case '*':  
					printf("%d * %d = %d\n", cislo1, cislo2, cislo1*cislo2);
				break;			
			case '/':  
				if(cislo2 != 0){
						printf("%d / %d = %lf\n", cislo1, cislo2, (double)cislo1/cislo2);
				}
				else
					printf("Nulou nelze delit!!!!!!!!!!!!!!");
				break;
			default: 
				printf("Nespravna operace!!!!!!!!! ");
				break;
		}
		printf("chces ukonict program? (A/N)");
		volba=getchar();
		
		if(volba== 'A'|| volba == 'a')
			break;
		
}
return 0;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	char znak;
	
	printf("Zadej znak: ");
	znak = getchar();
	
	switch(znak){
		case '1':  
			printf("1. Zadals %c\n", znak);
			break;
		case '2':  
			printf("2. Zadals %c\n", znak);
			break;
		case '3':  
			printf("3. Zadals %c\n",znak);
			break;			
		case '4':  
			printf("4. Zadals %c\n", znak);
			break;
		case '5':  
			printf("5. Zadals %c\n", znak);
			break;
		case '6':  
			printf("6. Zadals %c\n", znak);
			break;
		default: 
			printf("Jste mimo rozsah!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
			break;
	}
	
}

int main(int argc, char *argv[]) {
	int cislo;
	setlocale(LC_ALL, "");
	
	printf("Zadej cislo: ");
	scanf("%d", &cislo);
	
	switch(cislo){
		case 1:  
			printf("1. Zadals %d\n", cislo);
			//break;
		case 2:  
			printf("2. Zadals %d\n", cislo);
			//break;
		case 3:  
			printf("3. Zadals %d\n", cislo);
			break;			
		case 4:  
			printf("4. Zadals %d\n", cislo);
			//break;
		case 5:  
			printf("5. Zadals %d\n", cislo);
			//break;
		case 6:  
			printf("6. Zadals %d\n", cislo);
			break;
		default: 
			printf("Jste mimo rozsah!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
			break;
	}
	
}

int main(int argc, char *argv[]) {
	int cislo;
	setlocale(LC_ALL, "");
	
	printf("Zadej cislo: ");
	scanf("%d", &cislo);
	
	switch(cislo){
		case 1:  //if(cislo == 1)
			printf("1. Zadals %d\n", cislo);
			break;
		case 2:  //else if(cislo == 2)
			printf("2. Zadals %d\n", cislo);
			break;
		case 3:  //else if(cislo == 3)
			printf("3. Zadals %d\n", cislo);
			break;
		default: //else
			printf("Jste mimo rozsah!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
			break;
	}
	
}
*/
