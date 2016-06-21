#include <stdio.h>
#define MAX 81
int main (void)
{
    char name[MAX];
    char * ptr;

    printf ("Hi, whar's your name? \n");
    ptr = fgets (name, MAX, stdin);
    printf ("%s? ah! %s!", name, ptr);

    return 0;
}
