#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mygets.h"

char showmenu (void);
void eatline (void);
void show (void (* fp) (char *), char * str);
void ToUpper (char *);
void ToLower (char *);
void Transpose (char *);
void Dummy (char *);

int main (void)
{
    char line[81];
    char copy[81];
    char choice;
    void (*pfun) (char *);

    fputs ("Enter a string (empty to quit): \n", stdout);
    while (mygets (line, 81) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu ()) != 'n')
        {
            switch (choice)
            {
                case 'u': pfun = ToUpper; break;
                case 'l': pfun = ToLower; break;
                case 't': pfun = Transpose; break;
                case 'o': pfun = Dummy; break;
            }
            strcpy (copy, line);
            show (pfun, copy);
        }
        fputs ("Enter a string (empty to quit)): \n", stdout);
    }
    fputs ("Bye!\n", stdout);
    return 0;
}

char showmenu (void)
{
    char ans;
    fputs ("Enter menu choice: \n", stdout);
    fputs ("u) uppercase\tl) lowercase\n", stdout);
    fputs ("t) transposed case \to) original case\n", stdout);
    fputs ("n) next string\n", stdout);
    ans = getchar ();
    ans = tolower (ans);
    eatline ();
    while (strchr ("ulton", ans) == NULL)
    {
        fputs ("Please enter a u l t o n: \n", stdout);
        ans = tolower (getchar ());
        eatline ();
    }
    return ans;
}

void eatline (void)
{
    while (getchar () != '\n')
        continue;
}

void ToUpper (char * str)
{
    while (* str)
    {
        * str = toupper (*str);
        str ++;
    }
}

void ToLower (char * str)
{
    while (* str)
    {
        *str = tolower (*str);
        str ++;
    }
}

void Transpose (char * str)
{
    while (*str)
    {
        if (islower (*str))
            * str = toupper (*str);
        else if (isupper (*str))
            * str = tolower (*str);
        str ++;
    }
}

void Dummy (char * str)
{
    NULL;
}

void show (void (* fp) (char *), char * str)
{
    (* fp) (str);
    fputs (str, stdout);
    putchar ('\n');
}
