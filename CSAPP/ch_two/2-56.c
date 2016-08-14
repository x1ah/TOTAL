#include <stdio.h>
#include "show-bytes.h"

int main (void)
{
    int foo_1 = 12345;
    int foo_2 = 456778;
    int foo_3 = 987923774;
    int foo_4 = 21347432;

    printf ("foo_1: 12345\n\n");
    test_show_bytes (foo_1);
    printf ("foo_2: %d\n\n", foo_2);
    test_show_bytes (foo_2);
    printf ("foo_3: %d\n\n", foo_3);
    test_show_bytes (foo_3);
    printf ("foo_4: %d\n\n", foo_4);
    test_show_bytes (foo_4);
    return 0;
}
