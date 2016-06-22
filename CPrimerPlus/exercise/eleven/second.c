#include <stdio.h>
#include <string.h>
int getArray (char * ar, int len);
int main (void)
{
    int len = 20;
    char arr[25];

    getArray(arr, len);
    fputs (arr, stdout);
    putchar ('\n');
    return 0;
}

int getArray (char * ar, int len)
{
    int i;
    char temp;
    printf ("Input your string longer than 20: \n");

    fgets (ar, 81, stdin);
    for (i=len; i < 81; i ++)
    {
        temp = *(ar+i);
        if (temp == ' ' || temp == '\n' || temp == '\t')
        {
            *(ar+i) = '\0';
            return 0;
        }
    }
}
