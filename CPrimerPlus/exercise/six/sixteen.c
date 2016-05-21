#include <stdio.h>
int main (void)
{
    double balance = 100;
    int year = 0;

    printf ("origin balance is $100\n");
    do
    {
        balance += 100 * 0.08;
        balance -= 10;
        year++;
    } while (balance >= 0);
    printf ("After %d years, balance left over $%lf\n", year, balance);
    return 0;
}
