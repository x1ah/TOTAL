#include <stdio.h>
long Fibonacci (unsigned long n);
int main (void)
{
    int n;
    while (scanf ("%d", &n) == 1)
        printf ("res: %ld\n", Fibonacci (n));
    return 0;
}

long Fibonacci (unsigned long n)
{
    long res = 0;
    int temp = 1;
    int temp2 = 1;
    int temp1 = 1;

    if (n <= 2)
        res = 1;
    else
        while (temp < n-1)
        {
            res = temp2 + temp1;
            temp2 = temp1;
            temp1 = res;
            temp++;
        }
    return res;
}
