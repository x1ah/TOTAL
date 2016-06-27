#include <stdio.h>
#include <stdlib.h>
void sort (int * arr, int size);

int main (void)
{
    int size = 100;
    int arr[size];
    int i;

    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 + 1;
        printf ("%3d", arr[i]);
        if (i % 20 == 19)
            putchar ('\n');
    }
    printf ("\nafter sorted: \n");
    sort (arr, size);
    for (i = 0; i < size; i++)
    {
        printf ("%3d", arr[i]);
        if (i % 20 == 19)
            putchar ('\n');
    }
    putchar ('\n');

    return 0;
}

void sort (int * arr, int size)
{
    int temp, i, j;

    for (i = 0; i < size; i++)
        for (j = i+1; j < size; j++)
        {
            if (*(arr+i) < *(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
}
