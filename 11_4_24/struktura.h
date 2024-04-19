#ifndef STRUKTURA_H
#define STRUKTURA_H

#define POCET 3

struct miry{
	char jmeno[15];
	char prijmeni[25];
	int vaha;
	int vyska;
	double bmi;
}osoba[POCET], *p; 
#endif
