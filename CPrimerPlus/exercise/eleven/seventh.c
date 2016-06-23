#include <stdio.h>
#include <string.h>
char * string_in (char * str1, char * str2);
int main (void)
{
    char s1[] = "Hello world and Python.";
    char s2[] = "Python";
    char * index;

    index = string_in (s1, s2);

    printf ("ptr: %p\n", index);
    fputs (index, stdout);
    return 0;
}

char * string_in (char * str1, char * str2)
{
    int index, i, res;
    int status = 1;
    int len_str1 = (int) strlen (str1);
    int len_str2 = (int) strlen (str2);

    for (index = 0; index < (len_str1 - len_str2); index ++)
    {
        res = index;
        for (i = index; (i < len_str2) && (status == 1); i++)
        {
            if (*(str1+i) != *(str2+i-index))
                status = 0;

            if (i-index == len_str2)
                return (str1 + res);
        }
    }
    return NULL;
}
