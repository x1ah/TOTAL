#include <stdio.h>
int main (void)
{
    double a, b, temp;

    printf ("Input two float number: ");
    while (scanf ("%lf %lf", &a, &b) == 2)
    {
        printf ("the two float num is %.4lf and %.4lf\n", a, b);
        temp = (double) (a - b) / (a * b);
        printf ("result is : %lf\n", temp);
        printf ("Input two float number: ");
    }
    return 0;
}
