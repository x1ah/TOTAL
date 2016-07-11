#include <stdio.h>
struct date {
    char month[20];
    char mo[4];
    int day;
};

int main (void)
{
    struct date test_month = {
        "octember",
        "OCT",
        31
    };

    printf ("%s (%s) have %d days.\n", test_month.month, test_month.mo, test_month.day);
    return 0;
}
