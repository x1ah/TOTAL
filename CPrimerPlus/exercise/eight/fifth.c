#include <stdio.h>
int main (void)
{
    int guess = 50;
    char temp;
    int temp_guess;
    int up = 100;
    int low = 0;


    printf ("Pick an integer from 1 to 100, I will try to guess ");
    printf ("it.\n Respond with a y if my guess is tight and with ");
    printf ("\n an n if it is wrong .\n");
    printf ("Uh ...is %d [b]igger than your number or [s]maller than or [e]qual?\n", guess);

    while ((temp = getchar ()) != 'e')
    {
        if (temp == 's')
        {
            low = guess;
            temp_guess = (up - low) / 2 + guess;
            guess = temp_guess;
        }
        else if (temp == 'b')
        {
            up = guess;
            temp_guess = guess - (up - low) / 2;
            guess = temp_guess;
        }
        else
            printf ("input error.\n");
        while (getchar () != '\n')
            continue;
         printf ("Uh ...is your [b]igger than number %d? or [s]maller than of [e]qual?\n", guess);
    }
    printf ("Yeah!\n");
    return 0;
}
