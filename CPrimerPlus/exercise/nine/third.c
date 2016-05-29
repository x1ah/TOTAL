#include <stdio.h>
void put_char (char ch, int nums, int lines);
int main (void)
{
    put_char ('+', 10, 10);
    return 0;
}

void put_char (char ch, int nums, int lines)
{
    int line, num;

    for (line=1; line<lines; line++)
    {
        for (num=1; num<nums; num++)
            putchar (ch);
        putchar ('\n');
    }
}
