#include <math.h>

//koule
double Vkoule(double x){
	return (4.0/3.0)*M_PI*x*x*x;
}

double Pkoule(double x){
	return 4.0*M_PI*x*x;
}

//kostka - kvadr

int Vkvadr(int x, int y, int z){
	return (x)*(y)*(z);
}
int Skvadr(int x,int y,int z){
	return 2*((x*y)+(x*z)+(y*z));
}
