#include <stdio.h>


int gombsugar()
{
	int gombsugar;
	printf("Adja meg a gomb sugaranaknak hosszat: \n");
	scanf("%d", &gombsugar);
	return gombsugar;
}

int gombfelszin()
{
	int sugar = gombsugar();
	int gombfelszin = 4 * 3.14 * (sugar * sugar);	
	return gombfelszin;
}

int gombterfogat()
{
	int sugar;
	int gombterfogat = 3.14 * 4 / 3 * (sugar * sugar * sugar);
	return gombterfogat;
}


int main()
{	
int felszin = gombfelszin();
int terfogat = gombterfogat();
printf("A gomb felszine: %d\n", felszin);
printf("A gomb terfogata: %d\n", terfogat);
		
return 0;
}