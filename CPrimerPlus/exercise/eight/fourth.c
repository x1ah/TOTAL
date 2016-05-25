#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main (void)
{
    char ch;
    int allWordsLen = 0;
    int words = 0;
    bool inword = false;


    while ((ch = getchar ()) != EOF)
    {
        if (((int) ch > 64) && ((int) ch < 123))
            ++allWordsLen;
        if (!isspace (ch) && !inword)
        {
            inword = true;
            ++words;
        }
        if (isspace (ch) && inword)
            inword = false;
    }
    printf ("total %d words and %d length.\n", words, allWordsLen);
    printf ("average %f charpital.\n", (float) allWordsLen / words);
    return 0;
}
