#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name!"
#define hh 3
int main(void)
{
    char name[40];
    const int h = 20;
    int temp;

    temp = hh + 3;
    printf ("What's your name?\n");
    scanf ("%s", name);
    printf ("Hello, %s. %s\n", name, PRAISE);
    printf ("Your name of %lu letters occupies %lu memory cells.\n",
            strlen (name), sizeof name);
    printf ("The phrase of praise has %lu letters", strlen (PRAISE));
    printf ("and occupies %ld memory cells.\n", sizeof (PRAISE));
    printf ("const int h = 20, and h = %d, hh = %d\n", h, temp);
    return 0;
}
