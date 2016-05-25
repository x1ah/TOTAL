#include <stdio.h>
int main (void)
{
    char ch;
    int allWordsLen = 0;
    int words = 0;

    while ((ch = getchar ()) != EOF)
    {
        if (((int) ch > 64) && ((int) ch < 123))
            ++allWordsLen;
        else
            ++words;
    }
    printf ("total %d words and %d length.\n", words, allWordsLen);
    printf ("average %f charpital.\n", (float) allWordsLen / words);
    return 0;
}
