#include <stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
    int index, score[SIZE];
    int sum = 0;
    char st[10];
    float average;

    printf ("Enter %d golf scores: \n", SIZE);
//    for (index = 0; index < SIZE; index++)
//    {
    scanf ("%d", &score[3]);
//    }
    printf ("The scores read in are as follows: \n");
//    for (index=0; index < SIZE; index++)
    printf ("%5d", score[3]);
    printf ("\n%lu", sizeof (score));
    printf ("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index];
    average = ((float) sum / SIZE);
    printf ("Sum of scores = %d, average = %.2f\n", sum, average);
    printf ("That's a handicap of %.0f. \n", average - PAR);
    do{
         scanf ("%d", &sum);
         printf ("%d\n", sum);
    }while (1);
    return 0;
}
