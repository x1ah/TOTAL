#include <stdio.h>
double mypow (double n, int p);
int main (void)
{
    int p;
    int n;

    for (p=-3; p<3; p++)
    {
        for (n=-2; n<2; n++)
            printf ("%d ** %d =%-7.3lf\t", n, p, mypow(n, p));
        putchar ('\n');
    }
    return 0;
}

double mypow (double n, int p)
{
    double res = 1;
    int temp;
    int tempp;

    if (n == 0)
        return 0;
    else if (p == 0)
        return 1;
    else
    {
        tempp = (p > 0)? p: -p;
        for (temp=1; temp<=tempp; temp++)
            res *= n;
        return (p>0)? res: 1/res;
    }
}
