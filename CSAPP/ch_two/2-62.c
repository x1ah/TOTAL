#include <stdio.h>
int int_shifts_are_logical (void);

int main (void)
{
    printf ("%d\n", int_shifts_are_logical());
    return 0;
}

int int_shifts_are_logical (void)
{
    int w = sizeof (int) << 3;
    return !(~((1 << (w-1)) >> (w-1)));
}
