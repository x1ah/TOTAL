#include <stdio.h>
void larger_of (double x, double y);
int main (void)
{
    larger_of (1.2, 4.2);
    return 0;
}

void larger_of (double x, double y)
{
    double temp;

    temp = (x > y)? x: y;

    x = temp;
    y = temp;
    printf ("x=%lf, y=%lf\n", x, y);
}
