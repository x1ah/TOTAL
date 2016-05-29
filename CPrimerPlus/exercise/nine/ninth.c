#include <stdio.h>
void to_binary_n (unsigned long n, int b);
long Fibonacci (unsigned long n);

int main (void)
{
    unsigned long number;
    printf ("Enter an integer (q to quit); \n");
    while (scanf ("%lu", &number) == 1)
    {
        printf ("Binary quuivalent: ");
        to_binary_n (number, 8);
        putchar ('\n');
        printf ("Fibonacci is : %ld\n", Fibonacci(number));
        printf ("Enter an integer (q to quit): \n");
    }
    printf ("Done.\n");
    return 0;
}

void to_binary_n (unsigned long n, int b)
{
    int r;
    r = n % b;
    if (n >= b)
        to_binary_n (n / b, b);
    putchar ('0'+r);

    return ;
}

long Fibonacci (unsigned long n)
{
    if (n > 2)
        return Fibonacci (n-1) + Fibonacci (n-2);
    else
        return 1;
}
