#include <stdio.h>
#include "prog1.h"
#include <string.h>

int first_last(string s)
{
    if (s[0] == s[strlen(s) - 1])
    {
        return 1;
    }
    return 0;
}

int match_ends(int n, string words[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (strlen(words[i]) >= 2)
        {
            if (first_last(words[i]) > 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string words[] = { "aba", "xyz", "aa", "x", "bbb" };
    int words_meret = 5;

    printf("%d\n", match_ends(words_meret, words));

    for (int i = 0; i < words_meret; ++i)
    {
        puts(words[i]);
    }

    return 0;
}