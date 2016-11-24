#include <stdio.h>

int *quick_sort(int *array, int start, int stop);
int main (void)
{
    int i;
    int array[10] = {34, 21, 543, 1, 45, 12, 5, 12, 76, 54};
    quick_sort(array, 0, 9);
    for (i = 0; i < 10; i++)
        printf("%4d", array[i]);
    return 0;
}

int *quick_sort(int *array, int start, int stop)
{
    int i, j, x;
    if (start < stop)
    {
        i = start;
        j = stop;
        x = array[i];
        while (i < j)
        {
            while (i < j && array[j] >= x)
                j -= 1;
            if (i < j)
                array[i++] = array[j];
            while (i < j && array[i] <= x)
                i += 1;
            if (i < j)
                array[j--] = array[i];
        }
        array[i] = x;
        quick_sort(array, start, i - 1);
        quick_sort(array, i + 1, stop);
    }
    return array;
}
