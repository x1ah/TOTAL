#include <stdio.h>
int main (void)
{
    int array[8];
    int index, temp, two;

    for (index = 0, temp = 1, two = 1; index < 8; index++)
    {
        array[index] = temp * two;
        temp = array[index];
        two = 2;
    }
    index = 0;
    do{
        printf ("%4d", array[index]);
        index++;
    } while (index < 8);
    printf ("\n");
    return 0;
}
