#include <stdio.h>

int *bubble_sort(int *array, int n);

int main (void)
{
    int i = 0;
    int a[10] = {32, 21, 4, 32, 6, 56, 45, 75, 44, 20};
    bubble_sort(a, 10);
    for (i=0; i < 10; i++)
        printf("%4d", a[i]);
    return 0;
}

int *bubble_sort(int *array, int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = i; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    return array;
}
