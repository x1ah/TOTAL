#include <stdio.h>
#define ROW 3
#define COL 5
void get_arr (double (*arr)[COL]);
double average (double (*arr)[COL], int line);
//double average_all (double (*arr)[COL]);
double max_all (double (*arr)[COL]);
void pretty_print (double (*arr)[COL]);
int main (void)
{
    int L;
    double total = 0;
    double average_line = 0;
    double maxnum;

    double arr[ROW][COL];
    get_arr (arr);
    for (L = 0; L < ROW; L++)
    {
        average_line = average (arr, L);
        printf ("average of row%d is: %5.3lf\n", L+1, average_line);
        total += average_line;
    }
    printf ("average of all num is: %5.3lf\n", total);
    maxnum = max_all (arr);
    printf ("the max num is: %5.1lf\n", maxnum);
    return 0;
}

void get_arr (double (*arr)[COL])
{
    int r;

    for (r = 0; r < ROW; r++)
    {
        printf ("Input 5 numbers for row %d split with space : \n", r+1);
        if ((scanf ("%lf %lf %lf %lf %lf",
                        *(arr+r)+0, *(arr+r)+1, *(arr+r)+2, *(arr+r)+3, *(arr+r)+4)) == 5)
            continue;
        else
        {
            printf ("input error...\n");
            break;
        }
    }
}

double average (double (*arr)[COL], int line)
{
    double total = 0;
    int i;

    for (i = 0; i < COL; i++)
        total += *(*(arr + line) + i);

    return total / COL;
}

double max_all (double (*arr)[COL])
{
    int r, c;
    double _max;

    for (r = 0; r < ROW; r++)
        for (c = 0; c < COL; c++)
            _max = (*(*(arr + r) + c) > _max)? *(*(arr + r) + c): _max;
    return _max;
}


