#include <stdio.h>

int main()
{
	int i,j,k;
    int nagysag;
    
    printf("Kerem a gyemant nagysagat: ");
    scanf("%d", &nagysag);

    if (nagysag % 2 == 0)
	{
      while (nagysag % 2 == 0)
		{
			printf("Hiba, adjon meg egy paratlan szamot: ");
			scanf("%d", &nagysag);
			if (nagysag % 2 == 1)
			{
				for (i=0; i<nagysag; i++)
    {
        for (j=0; j<nagysag-i; j++)
        {
            printf(" ");
        }
        for (k=0;k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    for (i=nagysag-2; i>=0; i--)
    {
        for(j=0; j<nagysag-i; j++)
        {
            printf(" ");
        }
        for (k=0; k<=i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
			}
		}
	}
   return 0;
}