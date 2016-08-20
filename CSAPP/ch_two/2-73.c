#include <stdio.h>
#include <limits.h>
int saturating_add (int x, int y);

int main (void)
{
    return 0;
}

int saturating_add (int x, int y)
{
    int w = sizeof (int);
    if (x + y < -(1<<(w-1)))
        return INT_MIN;
    else if (x + y >= (1<<(w-1)))
        return INT_MAX;
    else
        return x + y;
}
