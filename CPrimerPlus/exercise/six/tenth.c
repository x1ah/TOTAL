#include <stdio.h>
int main (void)
{
    int nums[8];
    int index;

    printf ("Input eitht num: ");
    for (index = 0; index < 8; index++)
        if (scanf ("%d", &nums[index]) != 1)
        {
            printf ("Input error");
            return 0;
        }
    for (index = 7; index >= 0; index--)
        printf("%d", nums[index]);
    printf ("\nDone.\n");
    return 0;

}
