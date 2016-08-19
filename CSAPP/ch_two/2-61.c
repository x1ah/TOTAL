#include <stdio.h>
int func (int x);

int main (void)
{
    int x = 0xf4123466;
    printf ("%d\n", func(x));
    return 0;
}

int func (int x)
{
    int shift_val = (sizeof (int)-1) << 3;
 /*   printf ("%d\n", shift_val);
    printf ("%d, %d, %d, %d\n", !(~x), !x, !(x >> shift_val ^ 0x00), !(((x << shift_val)>>shift_val) & 0xff)); */
    return !(~x) ||
        !x ||
        !(x >> shift_val ^ 0x00) ||
        !(((x << shift_val)>>shift_val) & 0xff);
}
