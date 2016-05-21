#include <stdio.h>
int main (void)
{
    int n_even = 0;
    int n_odd = 0;
    int even_sum = 0;
    int odd_sum = 0;
    int num;
    float even_avrag, odd_avrag;

    printf ("Input some nums 0 to quit: ");
    while (scanf ("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            n_even++;
            even_sum += num;
        }
        else
        {
            n_odd++;
            odd_sum += num;
        }
    }
    even_avrag = (float) even_sum / n_even;
    odd_avrag = (float) odd_sum / n_odd;
    printf ("%d even number and average is %f\n%d odd number and average is %f\n",
            n_even, even_avrag, n_odd, odd_avrag);
    return 0;
}

