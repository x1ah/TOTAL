#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char ch;
    int words = 0;
    int up_words = 0;
    int low_words = 0;
    int punctions = 0;
    int nums = 0;

    while ((ch = getchar ()) != EOF)
    {
        if (isspace (ch))
            words++;
        if (islower (ch))
            low_words++;
        if (isupper (ch))
            up_words ++;
        if (isdigit(ch))
            nums ++;
        if (ispunct (ch))
            punctions ++;
    }
    printf ("\n%d words, %d upper chars, %d lower words, %d punctions, %d numbers\n",
            words, up_words, low_words, punctions, nums);
    return 0;
}
