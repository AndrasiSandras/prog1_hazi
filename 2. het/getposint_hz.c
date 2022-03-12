#include <stdio.h>

int get_positiv_int()
{
	int szam;
	while (szam)
	{
		printf("Adjon meg egy egeszet: ");
		scanf("%d", &szam);
		if (szam > 0)
		{
			break;
		}
		
	}
	return szam;
}

int main()
{
	int szam = get_positiv_int();
	printf("\n");
	printf("A megadott szam: %d\n",szam);
	
    return 0;
}