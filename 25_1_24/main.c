#include <stdio.h>
#include <stdlib.h>
#include "vypocty.h"
//samostatna prace (cviceni) - predradny odpor k led diode
//vstup ss || st napeti, R-?,P-?
//pouzit OZ, KZ
int str;
double zda, U,I,R;
int main(int argc, char *argv[]) {
	printf("chcete stridave(1) nebo ss(2)? ");
	scanf("%d", &str);
	switch(str){
		case 1:
			zda = 0.707;
			break;
		case 2:
			zda = 1.0;
			break;
		default:
			printf("AHAHHAHHAHAHHAHA COPAK TO ZKOUSITE");
			break;	
	}
	printf("Zadejte U a I");
	scanf("%lf %lf", &U, &I);
	printf("R = %.1lf |P = %.1lf", vypR(U/zda,I), vypP(U/zda,I) );
	return 0;
}
