#include <stdio.h>
void cat (int * day, int n);
int main (void)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};

    printf ("sizeof (days) = %zd.\n", sizeof (days));
    printf ("len (days) = %lu.\n", sizeof (days) / sizeof (days[0]));
    cat (days, 10);
    return 0;
}
void cat (int * day, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf ("a[%d] = %d\n", i, *(day+i));
}
