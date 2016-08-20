#include <stdio.h>
#include <limits.h>

int main (void)
{
    return 0;
}

int tsuy_ovf (int x, int y)
{
    if ((x > 0 && y > 0 && x > INT_MAX + y)
        || (x < 0 && y < 0 && x < INT_MIN + y))
            return 1;
    else
        return x - y;
}
