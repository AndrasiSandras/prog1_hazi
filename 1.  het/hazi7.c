#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int j;
    printf("n: ");
    scanf("%d",&n);

	for (n; n > 0; n--)
    {
        if (n % 4 == 0)
        {
            printf("%d\n",n);
        }
        
    }
	return 0;
}