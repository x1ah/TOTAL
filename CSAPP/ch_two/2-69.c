#include <stdio.h>
unsigned rotate_right_shift (unsigned x, int n);

int main (void)
{
    unsigned x = 0x12345678;
    int n = 4;
//    printf ("hello world\n");
    printf ("0x%x\n", rotate_right_shift(x, n));
    return 0;
}

unsigned rotate_right_shift (unsigned x, int n)
{
    return (x >> n) | (x << (32-n));
}
