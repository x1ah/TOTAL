#include <stdio.h>
double tuneAverage (double x, double y);
int main (void)
{
    double res;

    res = tuneAverage (10.23, 3.21);
    printf ("res is %lf\n", res);
    return 0;
}

double tuneAverage (double x, double y)
{
    double cutdownTemp, res;

    cutdownTemp = (10/x + 10/y) / 2;
    res = 1 / cutdownTemp;
    return res;
}
