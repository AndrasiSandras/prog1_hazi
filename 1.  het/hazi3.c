#include <stdio.h>

int main(int argc, char **argv)
{
    int szam;
    int sum = 0;

    printf("Egesz szam (vege: 0): ");
    scanf("%d",&szam);

    while (szam != 0)
    {
        sum += szam;
        printf("Egesz szam (vege: 0): ");
        scanf("%d",&szam);
    }
    
    printf("Elemek osszege: %d \n", sum);

    return 0;
}