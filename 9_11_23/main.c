#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int cisla[10];	
	int cisla2[10] = {3,9,5,7,};
	int cisla3[10]= {10,20,30,40,50,60,70,80,90,100};
	int cisla4[]= {10,20,30,40,50,60,70,80,90,100};
	
	for(i = 0; i<10;i++){
		printf("%d. prvek s indexem %d ma hodnotu %d\n", i+1,i,cisla4[i]);
	}
	return 0;
}
