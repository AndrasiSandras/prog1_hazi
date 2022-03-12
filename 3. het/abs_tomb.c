#include <stdio.h>

int my_abs(int n)
{
    int i = 0;
	if (n >= 0)
	{
		return n;
	}
	else
	{
		return -1*n;
	}
}

int abs_tomb_kiir(const int meret,  const int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d ",my_abs(tomb[i]));
    }
    puts("");
}

int tomb_kiir(const int meret,  const int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d ",tomb[i]);
    }
    puts("");
}

int main()
{
    int szamok[10]={12,6,23,-56,7,-8,90,89,92,-38};
    int meret = 10;
    tomb_kiir(meret,szamok);
    abs_tomb_kiir(meret,szamok);
    return 0;
}