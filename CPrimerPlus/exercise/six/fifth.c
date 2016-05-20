#include <stdio.h>
int main (void)
{
    int start, stop, i;
    char temp;

    printf ("Input the start and stop at: ");
    printf ("q to quit.");
    while (scanf ("%d %d", &start, &stop) == 2 || start <= stop)
    {
        for (i = start; i <= stop; i++)
            printf ("the num is %d, and square is %d cube is %d\n",
                    i, i*i, i*i*i);
        printf ("Input the start and stop at: ");
    }
    return 0;
}
