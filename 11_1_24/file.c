#include <stdio.h>
void nacti(int *x){
	scanf("%d",x);
}

void prohodit(int *x, int *y){ // x = &a; prohodit(&a, &b)
	int pom = *x;
	*x = *y;
	*y = pom;
	printf("%d + %d\n", *x,*y);
}

void prohod(int x, int y){
	int pom = x;
	x = y;
	y = pom;
	printf("%d + %d\n", x,y);
	
}

int soucet(int x, int y){
	return (x)+(y);
}
