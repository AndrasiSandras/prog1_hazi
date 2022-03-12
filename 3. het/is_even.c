#include <stdio.h>

int is_even(int szam)
{
    if (szam % 2 == 0)
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
    is_even(szam);
    printf("%d\n", is_even(szam));
    return 0;
}