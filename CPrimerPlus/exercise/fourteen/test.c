#include <stdio.h>
#include <string.h>
#include "mygets.h"
int main (void)
{
    int res;
    char temp[10];
    res = strcmp("chrs", "chr");
    printf ("%d\n", res);
    mygets (temp, 10);
    printf ("String: %s\n", temp);
    return 0;
}
