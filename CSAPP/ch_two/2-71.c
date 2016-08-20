#include <stdio.h>
typedef unsigned packed_t;
int xbyte (packed_t word, int bytenum);

/*
 * A) 没有看出任何错误？
 */
int main (void)
{
    printf ("0x%x\n", xbyte (0x12345678, 3));
    return 0;
}

int xbyte (packed_t word, int bytenum)
{
//    printf ("0x%x\n", word >> 32);
//    printf ("%d\n", bytenum << 3);
    return (word >> (bytenum << 3)) & 0xff;
}
