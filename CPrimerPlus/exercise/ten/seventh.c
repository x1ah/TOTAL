#include <stdio.h>
double copy_ptr (double * source, double * target, int start, int len);
int main (void)
{
    double source[7] = {1, 2, 3, 4, 5, 6, 7};
    double target[3];
    int i;
    copy_ptr (source, target, 3, 3);
    printf ("target: \n");
    for (i = 0; i < 3; i ++)
        printf ("%5.1lf", *(target + i));
    printf ("\n");
    return 0;
}

double copy_ptr (double * source, double * target, int start, int len)
{
    int r;

    for (r = 0; r < len; r++)
            *(target + r) = *(source + start + r-1);
    return 0;
}
