#include <stdio.h>
#include <string.h>
#define MAX 81
int main (void)
{
//    char name[MAX];
//    char * ptr;
//
//    printf ("Hi, whar's your name? \n");
//    ptr = fgets (name, MAX, stdin);
//    if (* ptr == '\n')
//        printf ("NULL\n");
//    else
//        printf ("not null\n");
//
    int i, j;
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    const char * str[3] = {"hello", "world", "hey"};

    int (*ptnum)[3];

    ptnum = arr;

    for (i = 0; i < 2; i ++)
        for (j = 0; j < 3; j++)
            printf ("arr[%d][%d]: %p\n", i, j, (ptnum + i) + j);

    putchar ('\n');
    for (i=0; i < 3; i++)
        for (j = 0; j < sizeof (str[i]); j++)
            printf ("str[%d][%d]: %p\n", i, j, (str+i)+j);

    return 0;
}
