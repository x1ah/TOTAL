#include <stdio.h>
unsigned unsigned_high_prod (unsigned x, unsigned y);

int main (void)
{
//    printf ("0x%x\n", 0xfeffffee * 0xffffffee >> 16);
//    printf ("0x%x\n", 6 * 6 >> 3);
//    printf ("0x%x\n", unsigned_high_prod(0xff, 0xef));
    return 0;
}

unsigned unsigned_high_prod (unsigned x, unsigned y)
{
    int w = sizeof (unsigned) << 3;
    printf ("%d\n", w);
//    return ((x * y) >> w);
}
