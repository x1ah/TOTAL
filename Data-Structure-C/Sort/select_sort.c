#include <stdio.h>

int *select_sort(int * lst, int n);
int main (void)
{
    int i;
    int lst[10] = {43, 1, 6, 23, 765, 23, 12, 65, 34, 23};
    select_sort(lst, 10);
    for (i=0; i < 10; i++)
        printf("%4d", lst[i]);
    return 0;
}
int *select_sort(int * lst, int n)
{
    int i, j, _min, temp;
    for (i = 0; i < n; i++)
    {
        _min = i;
        for (j = i + 1; j < n; j++)
            if (*(lst + j) < *(lst + _min))
                _min = j;
        temp = lst[i];
        lst[i] = lst[_min];
        lst[_min] = temp;
    }
    return lst;
}
