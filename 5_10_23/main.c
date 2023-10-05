#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//du- prepsat matrix do while


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int cislo1, cislo2;
	char operace, volba;
	
	while(1){
		//volba operace
		printf("zadej operaci: (+ - * /)\n");
		operace = getchar();
		
		//nacteni hodnot
		printf("zadej 2 hodnoty: \n");
		scanf("%d%d", &cislo1,&cislo2); getchar();
		
		//vypocty
		if(operace == '+'){
			printf("%d + %d =%d\n", cislo1, cislo2, cislo1+cislo2);
		}
		else if(operace == '-'){
			printf("%d - %d =%d\n", cislo1, cislo2, cislo1-cislo2);
		}
		else if(operace == '*'){
			printf("%d * %d =%d\n", cislo1, cislo2, cislo1*cislo2);
		}
		else if(operace == '/'){
			if(cislo2 != 0)
				printf("%d / %d =%lf\n", cislo1, cislo2, (double)cislo1/cislo2);
			else
				printf("nulou nelze dìlit");
		}
		else
			printf("neznámá operace\n");
		//konec programu?
		printf("chcete ukonèit program?(A/N): ");
		volba = getchar(); getchar();
		if(volba == 'a' || volba == 'A'){
				break;	
		}

			
	}
	
	return 0;
}

/*
i=i+1
i+=1

int main(int argc, char *argv[]) {
	int i;
	
	for(i= 0; i<10; i++){
		printf ("i = %d\n",i);
	}
		printf ("koncova hodnota = %d\n",i);
	return 0;
}
	
int main(int argc, char *argv[]) {
	int i;
	
	for(i= 0; i<10;i + 1){
		printf ("i = %d\n",i);
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	int i;
	
	for(i= 0; i<10;i = i+ 1){
		printf ("i = %d\n",i);
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	int i, start, stop, krok;
	
	printf("zadej hodnotu start: ");
	scanf("%d", &start);
	
	printf("zadej hodnotu stop: ");
	scanf("%d", &stop);
			
	printf("zadej hodnotu krok: ");
	scanf("%d", &krok);
	
	
	//	jde to i bez if a else ale je to nahovno
	if(start< stop){
		for(i= start; i<=stop;i = i+ krok){
			printf ("i = %d\n",i);
		}
	}
	else{
		for(i= start; i>=stop;i = i- krok){
			printf ("i = %d\n",i);
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k;
	
	for(i = 0; i<10; i++){
		for(j= 0; j<10; j++){
			for(k= 0; k<10; k++){
				printf("%d %d %d\n", i,j,k);
			}
		}
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k,l,m,n,o;
	
	//	matrix
	
	for(i = 0; i<10; i++){
		for(j= 0; j<10; j++){
			for(k= 0; k<10; k++){
				for(l= 0; l<10; l++){
					for(m= 0; m<10; m++){
						for(n= 0; n<10; n++){						
							for(o= 0; o<10; o++){
								printf("%d%d%d%d%d%d%d", i,j,k,l,m,n,o);
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k,l,m,n,o;
	
	i = 0;
	while(i<10){
		//i++;	//1-10
		printf("i = %d\n",i);
		i++; //0-9
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int i,j,k,l,m,n,o;
	
	i = 0;
	do{
		//i++;	//1-10
		printf("i = %d\n",i);
		i++; //0-9
	}while(i<10);
	return 0;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int cislo1, cislo2;
	char operace, volba;
	
	while(1){
		//volba operace
		printf("zadej operaci: (+ - * /)\n");
		operace = getchar();
		
		//nacteni hodnot
		printf("zadej 2 hodnoty: \n");
		scanf("%d%d", &cislo1,&cislo2); getchar();
		
		//vypocty
		if(operace == '+'){
			printf("%d + %d =%d\n", cislo1, cislo2, cislo1+cislo2);
		}
		else if(operace == '-'){
			printf("%d - %d =%d\n", cislo1, cislo2, cislo1-cislo2);
		}
		else if(operace == '*'){
			printf("%d * %d =%d\n", cislo1, cislo2, cislo1*cislo2);
		}
		else if(operace == '/'){
			if(cislo2 != 0)
				printf("%d / %d =%lf\n", cislo1, cislo2, (double)cislo1/cislo2);
			else
				printf("nulou nelze dìlit");
		}
		else
			printf("neznámá operace\n");
		//konec programu?
		printf("chcete ukonèit program?(A/N): ");
		volba = getchar(); getchar();
		if(volba == 'a' || volba == 'A'){
				break;	
		}

			
	}
	
	return 0;
}
*/
