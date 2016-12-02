#include <stdio.h>
int *shell_sort(int *arr, int n);
int main (void)
{
    int arr[10] = {4, 2, 1, 5, 9, 4, 0, 3, 8, 7};
    int i;
    shell_sort(arr, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]);
    }
    putchar('\n');
    return 0;
}

int *shell_sort(int *arr, int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return arr;
}
