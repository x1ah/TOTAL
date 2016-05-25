#include <stdio.h>
int main (void)
{
    int count = 0;
    char ch;

    while ((ch = getchar ()) != EOF)
        count++;
    printf ("Total %d charpital.\n", count);
    printf ("END!\n");
    return 0;
}
