#include <stdio.h>
#include <string.h>
char * reverse (char * str);
int main (void)
{
    char str[] = "hello world.";

    reverse (str);
    printf ("after reverse: \n");
    fputs (str, stdout);

    return 0;
}

char * reverse (char * str)
{
    int len = (int) (strlen (str));
    char temp[len];
    int i;
    strncpy (temp, str, len);

    for (i = 0; i < len; i ++)
        *(str+i) = *(temp+len-i-1);

    return str;
}
