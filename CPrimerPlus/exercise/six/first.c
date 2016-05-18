#include <stdio.h>
int main (void)
{
    char letters[26];
    char root = 'a';
    int i;

    for (i = 0; i < 26; i++)
    {
        letters[i] = root + i;
        printf ("%2c", letters[i]);
    }
    printf ("\n");
    return 0;
}
