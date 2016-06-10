#include <stdio.h>
int maxnum (int * arr, int len);
int main (void)
{
    int arr[10] = {3, 4, 2, 10, 523, 42,55, 12, 54, 89};
    int Maxnum;
    Maxnum = maxnum (arr, 10);
    printf ("The max number is: %d\n", Maxnum);
    return 0;
}

int maxnum (int * arr, int len)
{
    int res = 0;
    int i;
    for (i = 0; i < len; i++)
        res = (*(arr+i) > res)? *(arr+i): res;
    return res;
}
