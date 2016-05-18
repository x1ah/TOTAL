#include <stdio.h>
int main (void)
{
    int i, j, len, blank;
    char root_char, temp;

    printf ("Input the origin char: ");
    scanf ("%c", &root_char);
    len = (int) (root_char - 'A');
    for (i = 0; i < len+1; i++)
    {
        for (blank=i; blank < len; blank++)
            printf (" ");
        for (j=0; j <= i; j++)
            printf ("%c", 'A'+j);
        for (j = 0; j < i; j++)
            printf ("%c", 'A'+j);
        printf ("\n");
    }
}

