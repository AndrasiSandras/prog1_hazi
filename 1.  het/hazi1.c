#include <stdio.h>

int main(int argc, char **argv)
{

	int osszeg = 0;
	for(int i=1; i<=100; ++i)
	{
		osszeg+=i;
		
	}
	printf("%d\n",osszeg);

    return 0;
}
