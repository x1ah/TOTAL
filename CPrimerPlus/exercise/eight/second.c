#include <stdio.h>
int main (void)
{
    char ch;
    int count = 0;

    while ((ch = getchar ()) != EOF)
    {
        putchar ((ch == '\n') ? '\\': ch);
        if (((int) ch) < 32)
            putchar(ch);
        else
            printf ("%-5d", ch);
        ++count;
        if (count >= 10)
        {
            putchar ('\n');
            count = 0;
        }
    }
//    putchar ('\n');
    return 0;
}
