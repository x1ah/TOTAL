#include <stdio.h>
#include <stdbool.h>
int isPrime (int num);
int main (void)
{
    int num, i;
    int prime[20];
    int index;
    int status;

    printf ("Input a num[q to quit]: ");
    while (scanf ("%d", &num) == 1)
        {
            for (i = 1, index = 0; i <= num; i++)
            {
                status = isPrime (i);
                if (status == 1)
                {prime[index] = i;
                index++;}
                    }
            printf ("all prime is: ");
            for (i=0; i<index; i++)
                printf ("%4d", prime[i]);
            printf ("\nInput[q to quit]: ");
        }
    return 0;
}

int isPrime (int num)
{
    int isprime = 1;
    int index;

    for (index=2; index * index <= num; index++)
    {
        if (num % index == 0)
            isprime = 0;
    }
    return isprime;
}
