#include <stdio.h>

void sor_ki(int szelesseg, int csillagok)
{
    int szokozok=(szelesseg-csillagok)/2;
    for (int i = 0; i < szokozok; i++)
    {
        putchar(' ');
    }
    for (int i = 0; i < csillagok; i++)
    {
        putchar('*');
    }
    puts("");
}

int main()
{
	int n;
    printf("Adja meg a magassagot: ");
    scanf("%d",&n);
    printf("\n");

    for (int i = 1; i <= n; i+=2)
    {
        sor_ki(n,i);
    }
    for (int i = n-2; i >= 1; i-=2)
    {
        sor_ki(n,i);
    }
    return 0;
}