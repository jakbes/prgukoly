#include <stdio.h>
#include <math.h>
#include "funkce2B.h"
void nacti(int *x){
	scanf("%d",x);
	
}
int diskr(int x, int y, int z){ // x->a y->b z->c
	return (y*y)-(4*x*z);
}

double Re(double x, double y){ // x->a y->b
	return (-y)/(2.00*x);
}

double Im(double x, double y){
	return (sqrt(fabs(y)))/(2.00*x);
}
