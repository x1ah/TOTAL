#include <stdio.h>
int fits_bits (int x, int n);

int main (void)
{
    return 0;
}

int fits_bits (int x, int n)
{
    int max = ~(1 << (n-1));

    int res = max & x;
    return !res;
}
