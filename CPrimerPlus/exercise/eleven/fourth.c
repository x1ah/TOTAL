#include <stdio.h>
char * search (char * source_string, char ch);
int main (void)
{
    char * tar;

    char str[] = "hello Python and World.";
    tar = search (str, 'P');
    fputs (tar, stdout);
    return 0;
}

char * search (char * source_string, char ch)
{
    int index;
    char * temp_char;

    for (index = 0; ;index ++)
    {
        temp_char = source_string + index;
        if (* temp_char == ch)
            return temp_char;
        else if (*temp_char == '\0')
            return temp_char;
    }
}
