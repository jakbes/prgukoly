#include <stdio.h>
#include <stdlib.h>
#include "funkce2B.h"

int main(int argc, char *argv[]) {
	int a,b,c,D;
	printf("Zadej a: ");
	nacti(&a);
	
	if(a != 0){
		printf("Zadej b,c: ");
		nacti(&b);
		nacti(&c);
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
			printf("Koren je %.3lf + %.3lfi\n", Re(a,b),Im(a,D));
			printf("Koren je %.3lf - %.3lfi\n", Re(a,b),Im(a,D));
		}
		
	}
	else{
		printf("a = 0, NELZE");
	}
	
	return 0;
}
