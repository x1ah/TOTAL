#include <stdio.h>
typedef unsigned char *byte_pointer;

int is_little_endian(void);

int main (void)
{
    printf ("%d\n", is_little_endian());
    return 0;
}

int is_little_endian(void)
{
    int foo = 1;
    byte_pointer res = (byte_pointer) &foo;
    return !res[0];
}

/* the another method */

int is_little_endian_(void)
{
    int bar = 1;
    char *p = (char *) &bar;
    return *p;
}
