#include <stdio.h>
#include "prog1.h"
#include <string.h>

int rfind_char(string s, char c)
{
    int hossz = strlen(s);
    for (int i = hossz -1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    string s = "almafa";
    char c = 'a';
    printf("Az karakter utolso indexe: %d\n", rfind_char(s,c));

    return 0;
}