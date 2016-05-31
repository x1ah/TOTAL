#include <stdio.h>
int main (void)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};

    printf ("sizeof (days) = %zd.\n", sizeof (days));
    printf ("len (days) = %lu.\n", sizeof (days) / sizeof (days[0]));
    return 0;
}
