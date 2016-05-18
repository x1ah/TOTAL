#include <stdio.h>
int main (void)
{
    printf ("Type int has a size of %lu bytes.\n", sizeof (int));
    printf ("Type char has a size of %lu bytes.\n", sizeof (char));
    printf ("Type long has a size of %lu bytes.\n", sizeof (long));
    printf ("Type double has a size of %lu bytes.\n", sizeof (double));
    return 0;
}
