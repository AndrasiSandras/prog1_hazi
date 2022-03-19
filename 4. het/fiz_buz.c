#include <stdio.h>

void fizz_buzz()
{
    for (int i = 1; i <= 100; i++)
    {
        if (!(i % 15))
        {
            printf("fizzbuzz\n");
        }
        else if (!(i % 3))
        {
            printf("fizz\n");
        }
        else if (!(i % 5))
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    fizz_buzz();
    
    return 0;
}