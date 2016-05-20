#include <stdio.h>
double ad (int times);
double cu (int times);
int main (void)
{
    float index, i;
    int times;

    printf ("[1]: 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0...\n");
    printf ("[2]: 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0...\n");

    printf ("Input times[q to quit]: ");
    while (scanf ("%d", &times) == 1)
    {
        printf ("%d times after: \n[1] = %lf\n[2] = %lf\n",
                times, ad(times), cu(times));
        printf ("Input times[q to quit] :");
    }
}

double ad (int times)
{
    int index;
    double res = 0;

    for (index = 1; index <= times; index++)
    {
         res += 1.0 / index;
    }
    return res;
}

double cu (int times)
{
    int index, sign;
    double res = 0;

    for (index = 1, sign = 1; index <= times; index++)
    {
        res += 1.0 / index * sign;
        sign *= -1;
    }

    return res;
}
