#include <stdio.h>

int is_rendezett(const int meret, int tomb[])
{
	for (int i = 0; i < meret - 1; i++)
	{
		if (tomb[i] > tomb[i + 1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int szamok[10] = {12, 6, 23, 56, 7, 8, 90, 89, 92, 38};
	int szamok2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int meret = 10;
	int rendez = is_rendezett(meret, szamok);
	printf("%d\n", rendez);
	return 0;
}
