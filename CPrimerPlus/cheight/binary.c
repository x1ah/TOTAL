#include <stdio.h>
void to_binary (unsigned long n);
long Fibonacci (unsigned long n);

int main (void)
{
    unsigned long number;
    printf ("Enter an integer (q to quit); \n");
    while (scanf ("%lu", &number) == 1)
    {
        printf ("Binary quuivalent: ");
        to_binary (number);
        putchar ('\n');
        printf ("Fibonacci is : %ld\n", Fibonacci(number));
        printf ("Enter an integer (q to quit): \n");
    }
    printf ("Done.\n");
    return 0;
}

void to_binary (unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        to_binary (n / 2);
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
