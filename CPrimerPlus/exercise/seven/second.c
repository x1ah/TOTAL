#include <stdio.h>
#include <iso646.h>
#define STOP '#'
int main (void)
{
    char ch[255];
    char temp;
    int index = 0;
    int i;

    printf ("Input words: ");
    while ((ch[index] = getchar ()) != STOP)
        index++;
    for (i = 0; i < index; i++)
    {
        temp = (((i+1) % 8 == 0) and i != 0) ? '\n': '\t';
        printf ("%3c/%3d%c", ch[i], ch[i], temp);
    }
    printf ("\n");
    return 0;
}
