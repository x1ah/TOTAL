#include <stdio.h>
#include <string.h>
#define MAX 81
int main (void)
{
    char name[MAX];
    char * ptr;

    printf ("Hi, whar's your name? \n");
    ptr = fgets (name, MAX, stdin);
    if (* ptr == '\n')
//    if (strchr (ptr, '\n') == 0)
        printf ("NULL\n");
    else
        printf ("not null\n");

    return 0;
}
