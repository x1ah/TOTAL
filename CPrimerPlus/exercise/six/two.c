#include <stdio.h>
#define INDEX 10
int main (void)
{
    int start;
    int i = 0;
    while (1)
    {
        printf ("Input the root num: ");
        scanf ("%d", &start);
        while (i <= INDEX)
        {
            printf ("%5d", start + i);
            i++;
        }
        printf ("\n");
        i = 0;
    }
    return 0;
}
