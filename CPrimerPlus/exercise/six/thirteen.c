#include <stdio.h>
#include <iso646.h>
int main (void)
{
    double array_one[8];
    double array_two[8];
    int index;
    double temp;

    printf ("Input eight float num: ");
    for (index = 0, temp=0; index < 8; index ++)
    {
        if (scanf ("%lf", &array_one[index]) != 1)
        {
            printf ("Input error...\n");
            return 0;
        }
        array_two[index] = temp + array_one[index];
        temp = array_two[index];
    }
    printf ("res is: ");
    for (index = 0; index < 8; index++)
        printf ("%-10f", array_two[index]);
    printf ("\n");
    return 0;
}
