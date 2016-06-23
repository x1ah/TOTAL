#include <stdio.h>
char * getArray (char * ar);
int main (void)
{
    char arr[20];

    getArray(arr);
    printf ("\nAfter split: \n");
    fputs (arr, stdout);
    putchar ('\n');
}

char * getArray (char * ar)
{
    int i;
    char temp;
    printf ("Input your string: \n");

    fgets (ar, 81, stdin);
    for (i=0; ;i ++)
    {
        temp = *(ar+i);
        if (temp == ' ' || temp == '\n' || temp == '\t')
        {
            *(ar+i) = '\0';
            return ar;
        }
    }
}
