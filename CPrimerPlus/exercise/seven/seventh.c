#include <stdio.h>
#define BASE 10.00
int main (void)
{
    float work_time;
    float after_salary = 0;
    double rate = 0;
    float salary = 0;

    printf ("Input work time: ");
    if (scanf ("%f", &work_time) == 1)
    {
        if (work_time > 40)
            {
                work_time += (work_time-40) * 1.5;
            }
    }
    salary = work_time * BASE;
    if (salary <= 300)
    {
        rate = salary * 0.15;
        after_salary = salary -rate;
        }
    else if (salary <= 450)
    {
        rate = 300 * 0.15 + (salary-300) * 0.2;
        after_salary = salary - rate;
    }
    else
    {
        rate = 300 * 0.15 + 150 * 0.2 + (salary-450) * 0.25;
        after_salary = salary - rate;
    }
    printf ("total salary is %f and rate is %lf , after rate salary is %f\n",
            salary, rate, after_salary);
    return 0;
}
