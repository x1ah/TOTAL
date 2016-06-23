#include <stdio.h>
int is_within (char ch, char * string);
int main (void)
{
    char str[] = "Hello world and Python!";
    char ch = 'l';

    if (is_within (ch, str))
        printf ("\'%c\' within \"%s\".\n", ch, str);
    else
        printf ("\'%c\' not within \"%s\".\n", ch, str);

    return 0;
}

int is_within (char ch, char * string)
{
    int i;
    int res = 0;

    for (i = 0; *(string+i)!='\0'; i++)
    {
        res = (*(string + i) == ch)? 1: 0;
        if (res == 1)
            return res;
    }
}
