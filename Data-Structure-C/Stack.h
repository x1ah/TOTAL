#include "base.h"
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef char SElemType;
typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} Stack;

Status InitStack(Stack *S)
{
    S->base = (SElemType *) malloc (STACK_INIT_SIZE * sizeof(SElemType));
    if (!S->base)
        exit(OVERFLOW);
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    return OK;
}
Status DestroyStack(Stack *S)
{
    S->top = S->base;
    free(S->base);
    return OK;
}
Status ClearStack(Stack *S) 
{
    SElemType *p = S->base;
    if (StackEmpty(S))
        return ERROR;
    else
        while (p++ < S->top)
            *p = 0;
    return OK;
}
Status StackEmpty(const Stack *S)
{
    return (S->top == S->base);
}
int StackLength(Stack *S)
{
    if (S)
        return S->stacksize;
    else
        return 0;
}
Status GetTop(Stack *S, const SElemType e)
{
    if (S->top == S->base)
        return ERROR;
    e = *(S->top - 1);
    return OK;
}

Status Push(Stack *S, SElemType e)
{
    if (S->top - S->base >= S->stacksize)
    {
        S->base = (SElemType *) ralloc (S->base,
            (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S->base)
            exit(OVERFLOW);
        S->top = S->base + S->STACKINCREMENT;
    }
    *S->top ++ = e;
    return OK;
}

Status Pop(Stack *S, SElemType *e)
{
    if (S->top == S->base)
        return ERROR;
    e = --S->top;
    return OK;
}

Status StackTraverse(Stack *S, Status (*Visit)(SElemType e))
{
    SElemType *p;
    if (!S || StackEmpty(S))
        return ERROR;
    while (p++ <= S->top)
        Visit(*p);
    return OK;
}
Status Visit(SElemType e)
{
    printf("%4c", e);
    return OK;
}
