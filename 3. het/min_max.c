#include <stdio.h>

int max(const int meret, const int tomb[])
{
    int max = tomb[0];
    for (int i = 0; i < meret; i++)
    {
        if (max < tomb[i])
        {
            max=tomb[i];
        }
    }
    return max;
}

int min(const int meret, const int tomb[])
{
    int min = tomb[0];
    for (int j = 0; j < meret; j++)
    {
        if (min > tomb[j])
        {
            min=tomb[j];
        }
    }
    return min;
}


int main()
{
    int szamok[10]={12,6,23,56,7,8,90,89,92,38};
    int meret = 10;
    
    printf("A tomb elemeinek maximuma: %d\n",max(meret,szamok));
    printf("A tomb elemeinek minimuma: %d\n",min(meret,szamok));

    return 0;
}