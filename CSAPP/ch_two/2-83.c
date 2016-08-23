#include <stdio.h>

int main (void)
{
    return 0;
}

int float_ge (float x, float y)
{
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    /* waiting resolve */
    return (sx ^ 0 && sy & 1);
}
