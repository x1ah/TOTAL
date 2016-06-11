#include <stdio.h>
double * copy_ptr (double (* source)[3], double (* target)[3], int row, int line);
int main (void)
{
    double source[3][3] = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}};

    int row, line;
    double target[3][3];
    copy_ptr (source, target, 3, 3);

    printf ("target: \n");
    for (row = 0; row < 3; row++)
    {
        for (line = 0; line < 3; line++)
            printf ("%5.1lf", *(*(target+row) + line));
        printf ("\n");
    }
    return 0;
}

double * copy_ptr (double (* source)[3], double (* target)[3], int row, int line)
{
    int r, l;

    for (r = 0; r < row; r++)
    {
        for (l = 0; l < 3; l++)
            *(*(target + l) + r) = *(*(source + l) + r);
    }
    return * target;
}
