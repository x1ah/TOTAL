#include <stdio.h>
#include <string.h>
int main (void)
{
    char words[40];
    int index = 0;
    int length;

    printf ("Input the words: ");
    while (scanf ("%s", words) == 1)
    {
        length = strlen (words);
        printf ("the length of %s is %d\n", words, length);
        for (index = length; index >= 0; index--)
            printf ("%c", words[index]);
        printf ("\n");
        printf ("Input the words: ");
    }
    return 0;
}
