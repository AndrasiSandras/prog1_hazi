#include <stdio.h>

int main(int argc, char **argv)
{
    int osszeg = 0;
	    for(int i = 999; i > 0; --i)
	    {
            if (i % 3 == 0 || i % 5 == 0)
            {
                osszeg += i;
            }
	    }   
	    printf("%d\n", osszeg);

    return 0;
}