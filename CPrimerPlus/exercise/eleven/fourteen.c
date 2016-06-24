#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int my_atoi (char * str);
int main (void)
{
    char * str;
    int res;

    do{
        printf ("Input string: \n");
        fgets (str, 81, stdin);
        res = my_atoi (str);
        printf ("res: %d\n", res);
    } while (! isspace (*(str)));

    return 0;
}

int my_atoi (char * str)
{
    int index = 0;
    int res;

    if (isdigit(*(str)))
    {
        while (isdigit(*(str+index)))
            index ++;
        res = (int) strtol (str, &(str+index), 10);
        return res;
    }

    else
        return 0;
}
