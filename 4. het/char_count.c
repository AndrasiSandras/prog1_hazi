#include <stdio.h>
#include "prog1.h"
#include <string.h>

int char_count(string s, char c)
{
    int hossz = strlen(s);
    int count = 0;
    for (int i = hossz -1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "almafa";
    char c = 'a';
    printf("Az karakter elofordulasai: %d\n", char_count(s,c));

    return 0;
}