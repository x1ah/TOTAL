#include <stdio.h>
#include <ctype.h>
char get_choice (void);
char get_first (void);
float get_number (void);
void add (void);
void subtract (void);
void multiply (void);
void divide (void);

int main (void)
{
    char choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
            case 'a':
                add ();
                break;
            case 's':
                subtract ();
                break;
            case 'm':
                multiply ();
                break;
            case 'd':
                divide ();
                break;
            default:
                printf ("error input, again.\n");
                break;
        }
    }
    printf ("Bye!\n");
    return 0;
}

char get_first (void)
{
    char ch, temp;

    while ((ch = getchar ()) != '\n')
    {
        if (!isspace(ch))
            break;
    }
    while ((temp = getchar ()) != '\n')
        continue;
    return ch;
}

float get_number (void)
{
    float num;
    char ch;

    while (scanf ("%f", &num) != 1)
    {
        while ((ch = getchar ()) != '\n')
            putchar (ch);
        printf (" is not a number.\n");
        printf ("Please enter a number. sach as 2.5, 3: ");
    }
    return num;
}

char get_choice (void)
{
    char choice;

    printf ("Enter you choice: \n");
    printf ("  a. add         s. subtract \n");
    printf ("  m. multiply    d. divide\n");
    printf ("  q. quit\n");
    choice = get_first ();
    return choice;
}

void add (void)
{
    float num_one, num_two;

    printf ("Enter the first number: ");
    num_one = get_number ();
    printf ("Enter the second number: ");
    num_two = get_number ();
    printf ("%.2f + %.2f = %.2f\n", num_one, num_two, num_one+num_two);
}

void subtract (void)
{
    float num_one, num_two;

    printf ("Enter the first number: ");
    num_one = get_number ();
    printf ("Enter the second number: ");
    num_two = get_number ();
    printf ("%.2f - %.2f = %.2f\n", num_one, num_two, num_one-num_two);
}

void multiply (void)
{
    float num_one, num_two;

    printf ("Enter the first number: ");
    num_one = get_number ();
    printf ("Enter the second number: ");
    num_two = get_number ();
    printf ("%.2f * %.2f = %.2f\n", num_one, num_two, num_one*num_two);
}

void divide (void)
{
    float num_one, num_two;

    printf ("Enter the first number: ");
    num_one = get_number ();
    printf ("Enter the second number: ");
    while ((num_two = get_number ()) == 0)
    {
        printf ("Enter a number other than 0: ");
    }
    printf ("%.2f / %.2f = %.2f\n", num_one, num_two, num_one/num_two);
}
