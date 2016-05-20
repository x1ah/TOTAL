#include <stdio.h>
#include <iso646.h>
long mul (int start, int stop);
int main (void)
{
    int start, stop;
    long res;

    printf ("Enter lower and upper integer limits: ");
    while ((scanf ("%d %d", &start, &stop) == 2) and start < stop)
    {
        res = mul (start, stop);
        printf ("The sums of the squares from %d to %d is %ld\n",
                start*start, stop*stop, res);
        printf ("Enter next set of limits: ");
    }
    printf ("Done\n");
}

long mul (int start, int stop)
{
    int index;
    long res = 0;

    for (index = start; index <= stop; index++)
    {
         res += index * index;
    }
    return res;
}
