#include <stdio.h>
int main ()
{
    char root = 'F';
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
            printf ("%c", root-j);
        printf ("\n");
    }
    return 0;
}
