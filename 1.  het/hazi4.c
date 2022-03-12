#include <stdio.h>

int main(int argc, char **argv)
{
    int szam;
    int szamlalo = 0;

    printf("Egesz szam (vege: 0): ");
    scanf("%d",&szam);

    while (szam != 0)
    {
        if(szam >= 1)
        {
            szamlalo ++;
        }
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
    }
    
    printf("Pozitiv lemek szama: %d \n", szamlalo);

    return 0;
}