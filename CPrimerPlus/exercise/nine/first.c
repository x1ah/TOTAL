#include <stdio.h>
double min (double x, double y);
int main (void)
{
    double x, y;
    while (scanf ("%lf %lf", &x, &y) == 2)
        printf ("The min one is %lf\n", min(x, y));
    return 0;
}

double min (double x, double y)
{
    return (x >= y)? y: x;
}
