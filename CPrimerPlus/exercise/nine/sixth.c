#include <stdio.h>
#include <ctype.h>
int charnum (char ch);
int main (void)
{
    char ch;

    while ((ch = getchar ()) != EOF)
    {
        if (ch == '\n')
            putchar (ch);
        else
            printf ("%3d", charnum (ch));
    }
    return 0;
}

int charnum (char ch)
{
    if (isalpha (ch))
        return (((int) tolower(ch)) - 96);
    else
        return -1;
}
