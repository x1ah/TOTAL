#include <stdio.h>
char * getArray (char * ar, int len);
int main (void)
{
    int len = 20;
    int i;
    char arr[25];

    getArray(arr, len);
    for (i = 0; i < len; i ++)
        putchar (arr[i]);
    putchar ('\n');
    return 0;
}

char * getArray (char * ar, int len)
{
    printf ("Input your string longer than 20: \n");
    fgets (ar, len, stdin);
    return ar;
}
