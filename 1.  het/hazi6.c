#include <stdio.h>

int main()
{
    int szam1;
    int szam2;
    
    printf("n1: ");
    scanf("%d",&szam1);
    
    printf("n2: ");
    scanf("%d",&szam2);
    printf("\n");

    if (szam1 > szam2)
    {
        printf(">\n");
    }
    else if (szam1 < szam2)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }    
    
    return 0;
}