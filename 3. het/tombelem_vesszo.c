#include <stdio.h>

int tomb_kiir(const int meret,  const int tomb[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d",tomb[i]);

        for (int j = 9; i < meret-1; j++)
        {
            printf(", ");
            break;
        } 
    }
    puts("");
}

int main()
{
    int szamok[10]={12,6,23,56,7,8,90,89,92,38};
    int meret = 10;
    tomb_kiir(meret,szamok);

    return 0;
}