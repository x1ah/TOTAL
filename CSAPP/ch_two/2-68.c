#include <stdio.h>

int lower_bits (int x, int n)
{
    return (1 << n) - 1;
}

int main (void)
{
    printf ("0x%X\n", lower_bits(1, 6));
    return 0;
}
