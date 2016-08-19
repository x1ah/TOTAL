#include <stdio.h>
int any_even_one (unsigned x)
{
    unsigned comp = 0x55555555;
    return (x & comp) == comp;

}
