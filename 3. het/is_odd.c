#include <stdio.h>

int is_odd(int szam)
{
    if (szam % 2 == 1)
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    int szam = 0;
    printf("Adjon meg egy szamot!\n");
    scanf("%d", &szam);
    is_odd(szam);
    printf("%d\n", is_odd(szam));
    return 0;
}