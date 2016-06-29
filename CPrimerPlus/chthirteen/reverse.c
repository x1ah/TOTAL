#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CNTL_Z '\032'
#define SLEN 50
int main (void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    fputs ("Enter the name of the file to be processed: \n", stdout);
    fgets (file, sizeof (file), stdin);
    if (file[strlen (file) -1] == '\n')
        file[strlen(file)-1] = '\0';

    if ((fp = fopen (file, "rb")) == NULL)
    {
        printf ("reverse can't open %s\n", file);
        exit (1);
    }
    fseek (fp, 0L, SEEK_END);
    last = ftell (fp);
    for (count = 1L; count <= last; count++)
    {
        fseek (fp, -count, SEEK_END);
        ch = getc (fp);
        if (ch != CNTL_Z && ch != '\r')
            putchar (ch);
        if (ch == '\r')
            putchar ('\n');
    }
    putchar ('\n');
    fclose (fp);
    return 0;



}
