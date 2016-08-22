#include <stdio.h>
#include <limits.h>

int main (void)
{
    return 0;
}

int mul5div8 (int x)
{
    int overflow = (((x << 2) + x) & INT_MIN) == INT_MIN;
    return (((x << 2) + x) >> 3) & (INT_MAX + overflow);
}
