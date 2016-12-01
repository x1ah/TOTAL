#include <stdio.h>
#define LENGTH 10
int *insert_sort(int *arr, int length);
int main (void)
{
    int i = 0;
    int array[LENGTH] = {4, 2, 6, 1, 9, 3, 1, 8, 7, 5};
    insert_sort(array, LENGTH);
    for (i = 0; i < LENGTH; i ++)
    {
        printf("%4d", array[i]);
    }
    putchar('\n');
    return 0;
}
int *insert_sort (int *arr, int length)
{
    int i, j;
    int move_value;
    for (i = 1; i < length; i++)
    {
        move_value = arr[i];
        j = i;
        while (j > 0 && arr[j-1] > move_value)
        {
            arr[j] = arr[j-1];
            j -= 1;
        }
        arr[j] = move_value;
    }
    return arr;
}
