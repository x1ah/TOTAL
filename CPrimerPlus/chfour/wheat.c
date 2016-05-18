#include <stdio.h>
#define SQUARES 64
#define CROP 1E15
int main (void)
{
    double current, total;
    int count;

    printf ("%d\n", 23 % 3);
    printf ("square     grains       total   ");
    printf ("fraction of  \n");
    printf ("   added   grain   ");
    printf ("US total %lu  \n", sizeof ('a'));
    total = current = 1.0;
//    printf ("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while (++count < 10)//SQUARES)
    {
        printf ("count : %4d\n", count);
        current = 2.0 * current;
        total += current;
        //printf ("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    printf ("That's all.\n");
    printf ("final count: %d\n", count);
}
