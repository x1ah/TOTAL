#include <stdio.h>
#include <string.h>
int main (void)
{
    char words[256];
    int index=0;
    int length;

    printf ("Input your words: ");
    while ((words[index] = getchar()) != '\n')
        index++;
    length =  strlen (words);
    for (index = length-3; index >= 0; index--)
        printf ("%c", words[index]);
    printf ("\n");
    return 0;
}
