#include <stdio.h>
#include <stdlib.h>
#include "mygets.h"
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main (void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);

    if ((pbooks = fopen ("book.dat", "a+b")) == NULL)
    {
        fputs ("Can't open book.dat file\n", stderr);
        exit (1);
    }
    rewind (pbooks);
    while (count < MAXBKS && fread (&library[count], size,
                1, pbooks) == 1)
    {
        if (count == 0)
            fputs ("Current contenrs of book.dat: ", stdout);
        printf ("%s by %s: $%.2f\n", library[count].title,
                library[count].author, library[count].value);
        count ++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs ("The book.dat file is full.", stderr);
        exit (2);
    }

    fputs ("Please add new book titles.", stdout);
    fputs ("Press [enter] at the start of a line to stop.", stdout);
    while (count < MAXBKS && mygets (library[count].title, MAXTITL)
            != NULL && library[count].title[0] != '\0')
    {
        fputs ("Now enter the author.", stdout);
        mygets (library[count].author, MAXAUTL);
        fputs ("Now enter the value: ", stdout);
        scanf ("%f", &library[count++].value);
        while (getchar () != '\n')
            continue;
        if (count < MAXBKS)
            fputs ("Enter the next title.", stdout);
    }

    if (count > 0)
    {
        fputs ("Here is the list of your books: ", stdout);
        for (index = 0; index < count; index ++)
            printf ("%s by %s: $%.2f\n", library[index].title,
                    library[index].author, library[index].value);
        fwrite (&library[filecount], size, count - filecount, pbooks);
    }
    else
        fputs ("No books? too bad.\n", stdout);

    fputs ("Bye.\n", stdout);
    fclose (pbooks);

    return 0;
}

