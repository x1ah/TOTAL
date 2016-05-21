#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char ch;
    printf ("Give me a letter os the alphabet, and I will give ");
    printf ("an animal name\nbeginning with that letter.\n");
    printf ("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower (ch))
            switch (ch)
            {
                case 'a':
                    printf ("argail, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf ("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf ("coati, racoonlike mammal\n");
                    break;
                case 'd':
                    printf ("desman, aquatic, molelike critter\n");
                    break;
                default:
                    printf ("fisher, brounish marten.\n");
            }
        else
            printf ("I recognize onlylowercase letters.\n");
        while (getchar () != '\n')
            continue;
        printf ("Please type another letter or a #.\n");
    }
    printf ("Bye!\n");
    return 0;
}
