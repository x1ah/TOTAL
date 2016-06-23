#include <stdio.h>
#include <string.h>
char * strip (char * str);
int main (void)
{
    char str[81];

    do
    {
        printf ("\nInput some words: \n");
        fgets (str, 81, stdin);
        strip (str);
        fputs (str, stdout);
    } while (* str != '\n');

    return 0;
}

char * strip (char * str)
{
    int index1, index2;
    int len_str = (int) (strlen (str));

    for (index1 = index2 = 0; index1 < len_str; index1 ++)
    {
        if (*(str + index1) != ' ')
            *(str + index2++) = *(str + index1);
    }
    *(str + index2) = '\0';
    return str;
}
