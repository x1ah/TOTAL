#include <stdio.h>
int main (void)
{
    char name[11], name2[11];
    int count;

    printf ("Please enter 2 names.\n");
    count = scanf ("%5s %10s", name, name2);
    printf ("I read the %d names %s and %s.\n", count, name, name2);

    return 0;
}
