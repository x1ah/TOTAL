#include <stdio.h>
#include <string.h>
#include "mygets.h"

struct namect {
    char fname[20];
    char lname[20];
    int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);

int main (void)
{
    struct namect person;

    getinfo (&person);
    makeinfo (&person);
    showinfo (&person);
    return 0;
}

void getinfo (struct namect * pst)
{
    printf ("Please enter your first name.\n");
    mygets (pst->fname, 20);
    printf ("Plese enter your lase name.\n");
    mygets (pst->lname, 20);
}

void makeinfo (struct namect * pst)
{
    pst->letters = strlen (pst->fname) + strlen (pst->lname);
}

void showinfo (const struct namect * pst)
{
    printf ("%s %s, your name contains %d letters.\n",
            pst->fname, pst->lname, pst->letters);
}
