#include <stdio.h>
#include "mygets.h"
int main (void)
{
    char temp[20];
    if (*mygets (temp, 20) == '\0')
        printf ("It's NULL!\n%s", temp);
    else
        printf ("It's NOT NULL!\n");
    return 0;
}
