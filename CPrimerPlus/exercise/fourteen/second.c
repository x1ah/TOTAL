#include <stdio.h>
#include <ctype.h>
#include "mygets.h"

struct date {
    char month_str[10];
    char abb[5];
    char month_num[4];
    int month_days;
    int year;
};

int get_item (struct date * today);
int calculate (struct date * today);

const struct date months[12] = {
    {"January", "Jan","1", 31, 2016},
    {"February", "Feb", "2",28, 2016},
    {"March", "Mar", "3",31, 2016},
    {"April", "Apr", "4",30, 2016},
    {"May", "May", "5",31, 2016},
    {"June", "Jun", "6",30, 2016},
    {"July", "Jul", "7",31, 2016},
    {"August", "Aug", "8",31, 2016},
    {"September", "Sep", "9",30, 2016},
    {"October", "Oct", "10",31, 2016},
    {"November", "Nov", "11",30, 2016},
    {"December", "Dec", "12",31, 2016}
};

int main (void)
{
    int res, today_num;
    struct date today;
    struct date * ptr;
    ptr = &today;
    today_num = get_item (ptr);
    res = calculate (ptr);
    if (res > 0)
        printf ("total %d days to %d-%s-%d\n", res+today_num, today_num, today.month_str, today.year);
    else
        printf ("valid date, %d\n", res);
    return 0;
}

int get_item (struct date * today)
{
    int today_num;
    printf ("Input the day number: \n");
    scanf ("%d", &today_num);
    while (getchar () != '\n')
        continue;
    printf ("Input the month: \n");
    mygets (today->month_str, 20);
    printf ("Input the years: \n");
    scanf ("%d", &today->year);
    while (getchar () != '\n')
        continue;
    return today_num;
}

int calculate (struct date * today)
{
    int i;
    int j = -1;
    int total = 0;
    char temp[10];
    strcpy(temp, today->month_str);
    temp[0] = toupper(temp[0]);
    for (i = 0; i < 13; i++)
    {
        if ((strcmp (temp, months[i].month_str) == 0) ||
                (strcmp (temp, months[i].abb) == 0) ||
            (strcmp (temp, months[i].month_num) == 0))
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return j;
    else
        for (i = 0; i <= j; i++)
            total += months[i].month_days;
    return total;
}
