#include <stdio.h>
double minmax (double * arr, int len);
int main (void)
{
    double arr[5] = {3.4, 221.4, 5.2, 4.3, 9.2};

    printf ("max - min = %lf\n", minmax (arr, 5));
    return 0;
}

double minmax (double * arr, int len)
{
    int i;
    double min = * arr;
    double max = * arr;
    double res;

    for (i = 0; i < len; i++)
    {
        min = (*(arr+i) > min)? min: *(arr+i);
        max = (*(arr+i) < max)? max: *(arr+i);
    }
    res = max - min;
    return res;
}
