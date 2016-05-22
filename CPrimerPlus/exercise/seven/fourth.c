#include <stdio.h>
int main (void)
{
char ch[255];
int index = 0;
int i;

printf ("Input words: ");
while ((scanf ("%c", &ch[index]) == 1) && ch[index] != '#')
{
    if (ch[index] == '.')
        ch[index] = '!';
    else if (ch[index] == '!')
    {
        ++index;
        ch[index] = '!';
    }
    index++;
}

for (i = 0; i < index; i++)
    printf ("%c", ch[i]);
printf ("\n");
return 0;
}
