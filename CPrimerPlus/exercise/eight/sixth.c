#include <stdio.h>
#include <ctype.h>
char get_first (void);

int main (void)
{
    char ch;

    ch = get_first ();
    putchar (ch);
    putchar ('\n');
    return 0;
}

char get_first (void)
{
    char ch;

    while ((ch = getchar ()) != '\n')
    {
        if (!isspace(ch))
            break;
    }
    return ch;
}
