#include <stdio.h>
#define STOP '#'
int main (void)
{
    int n_space = 0;
    int n_lines = 1;
    int n_chars = 0;
    char ch;

    printf ("Input words: ");
    while ((ch = getchar ()) != STOP)
    {
        switch (ch)
        {
            case '\n':
                n_lines++;
                break;
            case ' ':
                n_space++;
                break;
            default:
                n_chars++;
        }
    }
    printf ("%d space, %d lines, %d chars\n", n_space, n_lines, n_chars);
    return 0;
}
