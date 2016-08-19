#include <stdio.h>

/* bigger than 32 */
int bad_int_size_is_32(void)
{
    int set_msb = 1 << 31;
    int beyond_msb = (~set_msb) >> 31;

    return !beyond_msb;
}

/* bigger than 16 */
int bad_int_size_atleast_16(void)
{
    int set_msb = 1 << 15;
    int beyond_msb = (~set_msb) >> 15;

    return !!beyond_msb;
}

int main (void)
{
    printf ("%d\n", bad_int_size_is_32());
    printf ("%d\n", bad_int_size_atleast_16());
    return 0;
}
