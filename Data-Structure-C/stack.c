#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "base.h"
#include "Stack.h"


Status conversion (Stack *S);
void _flush(void);
Status get_base(int *in, int *out);
Status get_number(int *number);
Status get_number(int *number);
Status BtoA(Stack *S, int tobase, int number);
Status BtoD(int number, int *res);

int main(void)
{
    /* comp with 'gcc -lm -o stack' */
    Stack *S = (Stack *)malloc(sizeof(Stack));
    S->base = NULL;
    S->top = NULL;
    S->stacksize = 0;
    if (!InitStack(S))
        exit(ERROR);
    conversion(S);

    StackTraverse(S, Visit);
    putchar('\n');
    return 0;
}

Status get_base(int *in, int *out)
{
    printf("Input the In base and Out base: ");
    while (scanf("%d %d", in, out) != 2)
    {
        printf("input uncorrect. again");
        _flush();
    }
    return OK;
}

void _flush(void)
{
    while (getchar() != '\n')
        continue;
}

Status get_number(int *number)
{
    printf("Input the number you want to conversion: ");
    while (scanf("%d", number) != 1)
    {
        printf("Input uncorrect. again");
        _flush();
    }
    return OK;
}

Status BtoD(int number, int *res)
{   // binary to dec
    int curr = 0;
    int temp = 0;
    int i = 0;
    while (number != curr)
    {
        temp = number % (int)(pow(10, i++));
        if (temp - curr)
            *res += (int)pow(2, i-2);
        curr = temp;
    }
    return OK;
}

Status BtoA(Stack *S, int tobase, int number)
{   // binary to another base
    while (number)
    {
        Push(S, number % tobase);
        number /= tobase;
    }
    return OK;
}

Status conversion (Stack *S)
{
    int inbase, outbase, number;
    int curr;
    int res;
    get_base(&inbase, &outbase);
    get_number(&number);
    curr = number;
    res = 0;
    if (inbase == 10 && outbase == 2)
    {
        BtoA(S, 2, number);
    }
    else if (inbase == 2 && (outbase == 8 || outbase == 16 || outbase == 10))
    {
        BtoD(number, &res);
        BtoA(S, outbase, res);
    }
    else
    {
        printf("un support conversion now.");
        exit(ERROR);
    }
    return 0;
}
