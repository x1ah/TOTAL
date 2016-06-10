#include <stdio.h>
int max_index (double * arr, int len);
int main (void)
{
    double arr[10] = {2.3, 3.4, 32.3, 5.5, 23.4, 5.34, 52.32, 54.6, 7.5, 875.5};
    int index;
    index = max_index (arr, 10);
    printf ("The index of max nubmer is: %d\n", index);
    return 0;
}


int max_index (double * arr, int len)
{
    int res = 0;
    int index = 0;
    int i;

    for (i = 0; i < len; i++)
    {
        index = (*(arr+i) > res)? i: index;
        res = (*(arr+i) > res)? *(arr+i): res;
    }
    return index;
}
