#include "base.h"

#define STACK_INIT_SIZE 10
#define STACKINCREMENT 100

typedef int Status;

typedef char TElemType;

typedef struct BiTNode {
    TElemType data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
} BiTNode, *BiTree;

typedef BiTNode* SElemType;
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

Status StackEmpty(const Stack *S)
{
    return (S->top == S->base);
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

int StackLength(Stack *S)
{
    if (S)
        return S->stacksize;
    else
        return 0;
}

Status GetTop(Stack *S, SElemType e)
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
        S->base = (SElemType *) realloc (S->base,
            (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S->base)
            exit(OVERFLOW);
        S->stacksize += STACKINCREMENT;
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
    p = S->top;
    if (!S || StackEmpty(S))
        return ERROR;
    while (--p >= S->base)
        Visit(*p);
    return OK;
}

Status Visit(int e)
{
    if (e > 9)
        printf("%c", e + 87);
    else
        printf("%d", e);
    return OK;
}
