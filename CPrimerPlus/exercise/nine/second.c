#include <stdio.h>
void chline (char ch, int i, int j);
int main (void)
{
    chline ('+', 5, 10);
}

void chline (char ch, int i, int j)
{
    int temp;
    int ch_temp;

    for (temp=i; temp<j; temp++)
    {
        for (ch_temp=1; ch_temp<=temp; ch_temp++)
            putchar (ch);
        putchar ('\n');
    }
}
