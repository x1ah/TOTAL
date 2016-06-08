#include <stdio.h>
int main (void)
{
    int ar[2][3] = {{1, 2}, {3, 4}};
    int (*pt) [2];

    pt = ar;

    printf ("*pt = %d\n", **pt);
    return 0;
}
