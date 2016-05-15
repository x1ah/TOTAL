#include <stdio.h>
#define UNIT 60
float get_second ();
int main (void)
{
    float second;
    int hour, min;
    float temp;

    while (1)
    {
        second = get_second();
        if (second <= 0)
            break;
        printf ("hello while%f\n", second);
        hour = (int) second / (UNIT * UNIT);
        temp = (int) second % (UNIT * UNIT);
        min = (int) temp / UNIT;
        temp = second - hour * 3600 - min * UNIT;
        printf ("%.2fs is %d hours %d minute and %.2f second\n",second, hour, min, temp);
    }
}

float get_second ()
{
    float second;
    printf ("Input the second: ");
    scanf ("%f", &second);
    return second;
}
