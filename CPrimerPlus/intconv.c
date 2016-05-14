#include <stdio.h>
#define PAGES -336
#define WORDS 65618
int main (void)
{
    short num = PAGES;
    short mnum = -PAGES;
    int test;
    char foo[40];
    char bar;

    printf ("num as short and unsigned short: %hd %hu\n", num, num);
    printf ("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf ("num as int and char: %d %c\n", num, num);
    printf ("WORDS as int, short and char: %d %hd %c\n", WORDS, WORDS, WORDS);
    while(1)
    {
        printf ("input the test[int]: ");
//        scanf ("%d", &test);
        printf ("Input the bar[char]");
        scanf ("%c", &bar);
        printf ("bar: %c\n", bar);
//        printf ("test: %d\n", test);
    }
    return 0;
}

