#include <stdio.h>
#define SINGLE 17850
#define HOUSEHOLE 23900
#define MARRYTOGER 29750
#define MARRYLEFT 14875
double rate (int kind, double salary);
int main (void)
{
    int kind;
    double salary;
    double Rate;
    char continue_or_not;
    char temp;

    do
    {
        printf ("which kind of you:\n[1]single\n[2]household\n[3]marryed and have together\n[4]marryed and left.\n");
        if (scanf ("%d", &kind) == 1)
        {
            printf ("how much your salary: ");
            if (scanf ("%lf", &salary) == 1)
                Rate = rate (kind, salary);
        }
        printf ("your total salary is $%lf, and you should rate $%lf\n", salary, Rate);
        scanf ("%c", &temp);
        printf ("continue or not[y/n]: ");
        scanf ("%c", &continue_or_not);
    } while (continue_or_not != 'n');
    return 0;
}

double rate (int kind, double salary)
{
    double total_rate;
    int range;

    switch (kind)
    {
        case 1:
            range = SINGLE;
            break;
        case 2:
            range = HOUSEHOLE;
            break;
        case 3:
            range = MARRYTOGER;
            break;
        case 4:
            range = MARRYLEFT;
            break;
        default:
            printf ("no this kind.\n");
            break;
    }
    if (salary <= range)
        total_rate = salary * 0.15;
    else
        total_rate = range * 0.15 + (salary - range) * 0.28;
    return total_rate;
}
