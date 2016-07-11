#include <stdio.h>
#include "mygets.h"
void get_item (struct date *);
int calculate (struct date *);

struct date {
    int day;
    char month[20];
    int year;
    int month_days;
};

int main (void)
{
    int res;
    struct date today;
    struct date * ptr;
    ptr = &today;
    get_item (ptr);
    res = calculate (ptr);
    printf ("total %d days to %d-%s-%d\n", res, today.day, today.month, today.year);
    return 0;
}

void get_item (struct date * today)
{
    printf ("Input the day number: \n");
    scanf ("%d", &today->day);
    printf ("Input the month: \n");
    mygets (today->month, 20);
    printf ("Input the years: \n");
    scanf ("%d", &today->year);
}

int calculate (struct date *)
{

}
