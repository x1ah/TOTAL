#include <stdio.h>
#define D_PER_WEEK 7
int main (void)
{
    int days, weeks, temp;
    printf ("Input the days: ");
    scanf ("%d", &days);
    weeks = days / D_PER_WEEK;
    temp = days % D_PER_WEEK;
    printf ("%d days are %d weeks, %d days.\n", days, weeks, temp);
    return 0;
}
