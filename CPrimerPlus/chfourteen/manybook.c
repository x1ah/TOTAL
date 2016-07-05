#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 5
char * mygets (char * name, int size);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main (void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf ("Please enter the book title.\n");
    printf ("Preee [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && mygets (library[count].title, MAXTITL) != NULL
            && library[count].title[0] != '\0')
    {
        printf ("Now enter the author.\n");
        mygets (library[count].author, MAXAUTL);
        printf ("Now enter the value,\n");
        scanf ("%f", &library[count++].value);
        while (getchar () != '\n')
            continue;
        if (count < MAXBKS)
            printf ("Enter the next title.\n");
    }
    if (count > 0)
    {
        printf ("Here is the list of your books: \n");
        for (index = 0; index < count; index ++)
            printf ("%s by %s: $ %.2f\n", library[index].title,
                    library[index].author, library[index].value);
    }
    else
        printf ("No books? Too bad.\n");
    return 0;
}

char * mygets (char * name, int size)
{
    fgets (name, size, stdin);
    if (name[strlen (name) - 1] == '\n')
        name[strlen (name) - 1] = '\0';
    return name;
}
