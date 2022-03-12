#include <stdio.h>

int korsugar()
{
	int korsugar;
	printf("Adja meg a kor sugaranaknak hosszat: \n");
	scanf("%d", &korsugar);
	return korsugar;
}

double korkerulet()
{
	int sugar = korsugar();
	double korkerulet = 2 * sugar * 3.14;	
	return korkerulet;
}

double korterulet()
{
	int sugar;
	double korterulet = sugar * sugar * 3.14;
	return korterulet;
}


int main()
{
	double kerulet = korkerulet();
	double terulet = korterulet();
	printf("A kor kerulete: %lf\n", kerulet);
	printf("A kor terulete: %lf\n", terulet);

   return 0;
}