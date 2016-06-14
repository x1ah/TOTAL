#include <stdio.h>
#define ROW 3
#define COL 5
void justprint (double (*arr)[COL]);
double * arr_double (double (*arr)[COL]);
int main(void)
{
    double arr[ROW][COL] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.2, 2.3, 3.4, 4.5, 5.6},
        {1.3, 2.4, 3.5, 4.6, 5.7}
    };

    printf ("source array is:\n");
    justprint (arr);
    printf ("after double:\n");
    arr_double (arr);
    justprint (arr);
    return 0;
}


void justprint (double (*arr)[COL])
{
    int r, c;

    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COL; c++)
            printf ("%5.1lf", *(*(arr+r) + c));
        putchar ('\n');
    }
}

double * arr_double (double (*arr)[COL])
{
    int r, c;
    double temp = 0.0;

    for (r = 0; r < ROW; r++)
    {
        for (c = 0; c < COL; c++)
        {
//            printf ("temp:%-5.1lf", temp);
            temp = * (*(arr + r) + c);
//            printf ("temp:%-5.1lf", temp);
            * (*(arr + r) + c) = temp * 2;
        }
    }
    return * arr;
}
