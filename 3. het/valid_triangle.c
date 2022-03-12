#include <stdio.h>

int valid_triangle(int a, int b, int c)
{
    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && b + c > a && a + c > b)
    {
        return 1;
    }
    return 0;
    }
    return 0;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Adja meg az a oldalt: ");
    scanf("%d",&a);
    printf("Adja meg az b oldalt: ");
    scanf("%d",&b);
    printf("Adja meg az c oldalt: ");
    scanf("%d",&c);
    valid_triangle(a,b,c);
    puts("");

    return 0;
    
}