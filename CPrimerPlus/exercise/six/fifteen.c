#include <stdio.h>
int main (void)
{
    double daphne_balance = 100;
    double deirdre_balance = 100;
    int year = 0;

    printf ("Daphne have $100 and Deirdre have $100 at begin.\n");
    while (daphne_balance >= deirdre_balance)
    {
        daphne_balance += 100 * 0.1;
        deirdre_balance += deirdre_balance * 0.05;
        year++;
    }
    printf ("after %d years, deirdre's balance more than dephne.\n", year);
    printf ("Daphne have $%lf, Deirdre have $%lf\n", daphne_balance, deirdre_balance);
    return 0;
}
