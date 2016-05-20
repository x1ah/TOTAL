#include <stdio.h>
double cal (double a, double b);
int main (void)
{
    double a, b, temp;

    printf ("Input two float number[q to quit]: ");
    while (scanf ("%lf %lf", &a, &b) == 2)
    {
        printf ("the two float num is %.4lf and %.4lf\n", a, b);
        temp = cal (a, b);
        printf ("result is : %lf\n", temp);
        printf ("Input two float number[q to quit]: ");
    }
    return 0;
}

double cal (double a, double b)
{
    double res;

    res = (a - b) / (a * b);
    return res;
}
