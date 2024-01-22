#include <stdio.h>
#include <stdlib.h>
#include "file.h"


int main(int argc, char *argv[]) {
	int a, b,c;
	
	printf("Zadej 2 cisla: ");
	nacti(&a);
	nacti(&b);
	
	c = soucet(a,b);
	printf("%d + %d = %d\n", a,b,c);
	prohod(a,b);
	prohodit(&a, &b);
	printf("%d + %d = %d\n", a,b,c);
	//c = soucet(a,b);
	//printf("%d + %d = %d", a,b,c);
	//printf("%d + %d = %d", a,b,soucet(a,b));
	
	return 0;
}

