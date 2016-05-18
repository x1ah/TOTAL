#include <stdio.h>
#include <stdbool.h>
int main (void)
{
    char s;
    bool status = true;
    printf ("%d\n", status);
    while (status)
    {
        printf ("input the s: ");
        scanf ("%c", &s);
        printf ("s = %c\n", s);
        printf ("status: %d\n", s==status);
    }
    return 0;
}
