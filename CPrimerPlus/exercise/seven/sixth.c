#include <stdio.h>
int main (void)
{
    char words[255];
    int index = 0;
    int i;
    int count = 0;

    printf ("Input the words: ");
    while ((scanf ("%c", &words[index]) == 1) && words[index] != '#')
    {
        if ((index >= 2) && (words[index-1] == 'e') && (words[index] == 'i'))
        {
            count++;
        }
        index++;
    }
    printf ("the 'ei' occer %d times\n", count);
    return 0;
}
