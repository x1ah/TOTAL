#include <stdio.h>
#include <string.h>
char * my_strncpy (char * s1, char * s2, int n);
int main (void)
{
    char s1[] = "World and Python!";
    char s2[] = "Hello";
    int n = 3;

    printf ("s1: %s, s2: %s\n", s1, s2);
    printf ("after my_strncpy func:\n\n");
    my_strncpy (s1, s2, n);
    fputs (s1, stdout);

    return 0;
}

char * my_strncpy (char * s1, char * s2, int n)
{
    int index;

    if ((int) strlen (s2) < n)
    {
        for (index = 0; index < n; index ++)
            *(s1 + index) = *(s2 + index);
        return s1;
    }
    else
        return s1;
}
