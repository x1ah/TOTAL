#include <stdio.h>
int count (void);
int main (void)
{
    int i, times;

    for (i = 0; i < 10; i++)
        times = count ();
    printf ("call back %d times\n", times);
    return 0;
}

int count (void)
{
    static int times = 0;
    times += 1;
    return times;
}
