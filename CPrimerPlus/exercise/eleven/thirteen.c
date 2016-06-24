#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * num[])
{
    double temp, num1;
    int num2;
    num1 = atof (*(num + 1));
    num2 = atoi (*(num + 2));

    printf ("%.3f ** %d = ", num1, num2);

    for (temp = 1; num2 > 0; num2--)
        temp *= num1;

    printf ("%.4f\n", temp);
    return 0;
}
