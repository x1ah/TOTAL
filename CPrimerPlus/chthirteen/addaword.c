#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40
int main (void)
{
    FILE * fp;
    char words[MAX];

    if ((fp = fopen("words", "a+")) == NULL)
    {
        fprintf (stdout, "Can't open \" words \"file \n");
        exit (1);
    }
    puts ("Enter words to add to the fiile: press the Enter");
    fputs ("keys at the beginning of a line to terminate.\n", stdout);
    while (fgets (words, MAX, stdin) && (words[0] != '\0') && *words != '\n')
        fprintf (fp, "%s ", words);
    fputs ("File contents: \n", stdout);
    rewind (fp);
    while (fscanf (fp, "%s", words) == 1)
    {
        fputs (words, stdout);
        putchar ('\n');
    }
    if (fclose (fp) != 0)
        fprintf (stderr, "Error closing file\n");
    return 0;
}
