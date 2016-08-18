#include <stdio.h>
 unsigned replace_byte (unsigned x, unsigned char b, int i)
{
    return ((x & (~(0xff << i*8))) | (b << i*8));
}

int main (void)
{
    printf ("%x\n", replace_byte (0x12345678, 0xab, 0));
    return 0;
}
