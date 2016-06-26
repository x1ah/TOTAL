#include <stdio.h>
void critic (int * pt);
int main (void)
{
    static int units = 0;

    printf ("How many pounds to a firkin of butter?\n");
    scanf ("%d", &units);
    while (units != 56)
        critic (&units);
    printf ("You must have looked it up\n");
    return 0;
}

void critic (int * pt)
{
    printf ("No luck, chummy. Try again.\n");
    scanf ("%d", pt);
}
