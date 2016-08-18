#include <stdio.h>
typedef unsigned char *char_pointer;
unsigned trans (unsigned x, unsigned y);

int main (void)
{
    unsigned x = 0x89abcdef;
    unsigned y = 0x76543210;

    printf ("%x\n", trans(x, y));
    return 0;
}

unsigned trans (unsigned x, unsigned y)
{
    return (x & 0xff) | (y & ~0xff);
}
