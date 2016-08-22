#include <stdio.h>
int divide_power2 (int x, int k);

int main (void)
{
    printf ("%d", divide_power2(16, 2));
    return 0;
}

int divide_power2 (int x, int k)
{
    return x >> k;
}
