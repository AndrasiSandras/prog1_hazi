#include <stdio.h>
#include <stdlib.h>

int main()
{
    char asc1 = 'V', asc2 = 'X', asc3 = 'B', asc4 = '(';
    int datum = asc2 - asc4;

    printf("%d%d\n", asc1 - asc3, asc2 - asc3);

    exit(datum);
}