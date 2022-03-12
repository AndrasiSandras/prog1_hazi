#include <stdio.h>

int main(int argc, char **argv)
{
    int szam;
    int szamlalop = 0;
    int szamlalon = 0;

    printf("Egesz szam (vege: 0): ");
    scanf("%d",&szam);

    while (szam != 0)
    {
        if(szam >= 1)
        {
            szamlalop ++;
        }
        else(szamlalon ++);

        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
    }
    
    printf("Pozitiv lemek szama: %d \n", szamlalop);
    printf("Negativ lemek szama: %d \n", szamlalon);

    return 0;
}