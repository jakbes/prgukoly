#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int cislo;
	printf("zadej cislo: ");
	scanf("%d", &cislo);
	
	//zjisti zda je znak 10-20 nebo 50-60
	
	if((cislo >= 10 && cislo <= 20)||(cislo >= 50 && cislo <= 60)){
		printf("cislo %d je v rozsahu", cislo);
	}
	else
		printf("cislo %d neni v rozsahu", cislo);
		
	return 0;
}

/*
int main(int argc, char *argv[]) {
	int cislo1, cislo2;
	setlocale(LC_ALL, "");
	
	printf("zadej 2 celý èísla: ");
	scanf("%d%d", &cislo1, &cislo2);
	
	if(cislo1 == cislo2){
		printf("%d a %d jsou stejný!\n", cislo1, cislo2);
	}
	else
		printf("%d a %d nejsou stejný!\n", cislo1, cislo2);
	
	return 0;
}

int main(int argc, char *argv[]) {
	int cislo1, cislo2, cislo3;
	setlocale(LC_ALL, "");
	
	printf("zadej 2 celý èísla: ");
	scanf("%d%d", &cislo1, &cislo2);
	
	if(cislo1 != cislo2){
		printf("%d a %d nejsou stejný!\n", cislo1, cislo2);
	}
	else
		printf("%d a %d jsou stejný!\n", cislo1, cislo2);
	
	return 0;
}

int main(int argc, char *argv[]) {
	int cislo1, cislo2, cislo3;
	setlocale(LC_ALL, "");
	
	printf("zadej 3 celý èísla: ");
	scanf("%d%d%d", &cislo1, &cislo2, &cislo3);
	
	if(cislo1 == cislo2==cislo3){
		printf("%d a %d a %d jsou stejný!\n", cislo1, cislo2, cislo3);
	}
	else
		printf("%d a %d a %d nejsou stejný!\n", cislo1, cislo2, cislo3);
	
	return 0;
}

int main(int argc, char *argv[]) {
	int cislo1, cislo2, cislo3;
	setlocale(LC_ALL, "");
	
	printf("zadej 3 celý èísla: ");
	scanf("%d%d%d", &cislo1, &cislo2, &cislo3);
	
	if(cislo1 > cislo2){
		if(cislo1 > cislo3){		
			printf("%d je nejvetsi", cislo1);
		}
		else
			printf("%d je nejvetsi", cislo3);	
	}
	else{
		if (cislo2>cislo3){
		
		
			printf("%d je nejvetsi", cislo2);
	}
	else{
	
		printf("%d je nejvetsi", cislo3);	}
	
	}


	return 0;
}

int main(int argc, char *argv[]) {
	
	int cislo1, cislo2, cislo3;
	setlocale(LC_ALL, "");
	
	printf("zadej 3 celý èísla: ");
	scanf("%d%d%d", &cislo1, &cislo2, &cislo3);
	
	if((cislo1 > cislo2)&&(cislo1 > cislo3)){
		printf("%d je nejvetsi", cislo1);
	}
	
	if((cislo2 > cislo1)&& (cislo2 > cislo3)){
		printf("%d je nejvetsi", cislo2);
	}
	if((cislo3 > cislo2)&& (cislo3 > cislo1)){
		printf("%d je nejvetsi", cislo3);
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	char znak;
	znak = getchar();
	//scanf("%c", &znak);
	//printf("zadal jste znak %c ", znak);
	
	if(znak >= '0' && znak <= '9'){
		printf("Zadali jste cislo: %c", znak);
	}
	else if(znak >= 'A' && znak <= 'Z'){
		printf("Zadali jste velky pismeno: %c", znak);
	}
	else if(znak >= 'a' && znak <= 'z'){
		printf("Zadali jste maly pismeno: %c", znak);
	}
	else{
		printf("zadal jste znak %c ", znak);
	}
		
}

*/
