#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int cislo1, cislo2;
	setlocale(LC_ALL, "");
	printf("Zadej 2 celý èísla: \n");
	scanf("%d%d", &cislo1, &cislo2);
	if(cislo1>cislo2)
		printf("èíslo %d je vetsi nez %d prik1\n", cislo1, cislo2);
	else
		printf("èíslo %d je vetsi nez %d prik2\n", cislo2, cislo1);
	return 0;
}
/*
	int cislo1, cislo2;
	
	setlocale(LC_ALL, "");
	printf("Zadej 2 celý èísla: \n");
	scanf("%d%d", &cislo1, &cislo2);
	printf("Zadals: %d a %d\n", cislo1, cislo2);

*/
/*
		int cislo1= 10, cislo2= 3;
	
	
		double vysledek;
	
		//	vysledek = cislo1 + cislo2;
		//	printf("%d + %d = %d\n", cislo1, cislo2, vysledek);
		//	printf("%d + %d = %d\n", cislo1, cislo2, cislo1+cislo2);
		//	printf("%d - %d = %d\n", cislo1, cislo2, cislo1-cislo2);
		//	printf("%d * %d = %d\n", cislo1, cislo2, cislo1*cislo2);
		
		vysledek = (double)cislo1/cislo2;
		
		printf("%d / %d = %.2lf\n", cislo1, cislo2, vysledek); //2 des. mista
		
		printf("%d / %d = %d\n", cislo1, cislo2, cislo1/cislo2);
		printf("%d %% %d = %d\n", cislo1, cislo2, cislo1%cislo2);		
*/
