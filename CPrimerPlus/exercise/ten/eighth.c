#include <stdio.h>
#define ROW 3
#define LINE 5
double * copy (double (*source)[LINE], double (*target)[LINE]);
void display (double (*source)[LINE], double (*target)[LINE]);
int main (void)
{
    double source[ROW][LINE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    double target[ROW][LINE];
    copy (source, target);
    display (source, target);
    return 0;
}

double * copy (double (*source)[LINE], double (*target)[LINE])
{
    int r, l;

    for (r = 0; r < ROW; r++)
    {
        for (l = 0; l < LINE; l++)
            *(*(target + r) + l) = *(*(source + r) + l);
    }
    return * target;
}

void display (double (*source)[LINE], double (*target)[LINE])
{
    int r, l;

    printf ("source: \n");
    for (r = 0; r < ROW; r++)
    {
        for (l = 0; l < LINE; l++)
            printf ("%5.1lf", *(*(source + r) + l));
        putchar ('\n');
    }
    putchar ('\n');
    printf ("target: \n");
    for (r = 0; r < ROW; r++)
    {
        for (l = 0; l < LINE; l++)
            printf ("%5.1lf", *(*(target+ r) + l));
        putchar ('\n');
    }
}
