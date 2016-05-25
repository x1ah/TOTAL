#include <stdio.h>
int main (void)
{
    char ch;
    int upper = 0;
    int lower = 0;

    while ((ch = getchar ()) != EOF)
    {
        if (((int) ch > 64) && ((int) ch < 91))
            ++upper;
        else if (((int) ch > 96) && ((int) ch < 123))
            ++lower;
        else
            continue;
    }
    printf ("%d upper charpital, %d lower charpital.\n", upper, lower);
    return 0;
}
