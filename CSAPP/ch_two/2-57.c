#include <stdio.h>
#include "show-bytes.h"

void show_short(short x);
void show_long(long x);
void show_double(double x);

int main (void)
{
    short short_x = 12345;
    long long_x = 12345;
    double double_x = 12345.0;

    printf ("show_short:\n");
    show_short (short_x);
    printf ("show_long:\n");
    show_long (long_x);
    printf ("show_double:\n");
    show_double (double_x);

}

void show_short(short x)
{
    show_bytes ((byte_pointer) &x, sizeof (short));
}

void show_long (long x)
{
    show_bytes ((byte_pointer) &x, sizeof (long));
}

void show_double (double x)
{
    show_bytes ((byte_pointer) &x, sizeof(double));
}
