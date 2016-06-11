#include <stdio.h>
void copy_arr (double * source, double * target1, int len);
int copy_ptr (double * source, double * target2, int len);
int main (void)
{
    double source [5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];

    copy_arr (source, target1, 5);
    copy_ptr (source, target2, 5);
    return 0;
}

void copy_arr (double * source, double * target1, int len)
{
    int temp = 0;

    printf ("target1 = {");
    for (temp = 0; temp < len; temp ++)
    {
        target1[temp] = source[temp];
        printf ("%4.1f,", target1[temp]);
    }
    printf ("}\n");
}

int copy_ptr (double * source, double * target, int len)
{
    int r;

    for (r = 0; r < len; r++)
    {
        *(target + r) = *(source + r);
        printf ("%5.1lf", *(target + r));
    }
    printf ("\n");
    return 0;
}
