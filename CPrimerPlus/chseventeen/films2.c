#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mygets.h"
#define TSIZE 45
struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};

int main (void)
{
    struct film * head = NULL;
    struct film * prev, * current;
    char input[TSIZE];

    fputs ("Enter first movie title : \n", stdout);
    while (mygets (input, TSIZE) != NULL && *input != '\0')
    {
        current = (struct film *) malloc (sizeof (struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy (current->title, input);
        fputs ("Enter your rating <0-10>: \n", stdout);
        scanf ("%d", &current->rating);
        while (getchar () != '\n')
            continue;
        fputs ("Enter next movie title (empty line to stop)\n", stdout);

        prev = current;
    }

    if (head == NULL)
        printf ("No data entered. \n");
    else
        printf ("Here is the movie list: \n");
    current = head;
    while (current != NULL)
    {
        printf ("Movie : %s \tRating: %d\n", current->title, current->rating);
        current = current->next;
    }
    current = head;
    while (current != NULL)
    {
        free (current);
        current = current->next;
    }
    printf ("Bye!\n");

    return 0;
}
