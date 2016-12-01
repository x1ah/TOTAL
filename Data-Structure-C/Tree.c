#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <ctype.h>
#include <malloc.h>
#include "Tree.h"

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW 3

Status CreateBiTree (BiTree* T);
Status TVisit(TElemType e);
Status PreOrderTraverseCursive (struct BiTNode *T, Status (* TVisit) (TElemType e));
Status InorderTraverseUnCursive (BiTree T, Status (* TVisit) (TElemType e));
Status PostOrderTraverseCursive (struct BiTNode *T, Status (* TVisit) (TElemType e));
Status LevelOrderTraverse (BiTree T, Status (* TVisit) (TElemType e));


int main (void)
{
	struct BiTNode *bt;
	bt = (struct BiTNode *)malloc(sizeof (struct BiTNode));

	CreateBiTree (&bt);
    printf("PreOrderTraverse: \n");
	PreOrderTraverseCursive(bt, TVisit);
    printf("\nPostOrderTraverse: \n");
    PostOrderTraverseCursive(bt, TVisit);
    printf("\nInOrderTraverse: \n");
    InorderTraverseUnCursive(bt, TVisit);
    printf("\nLevelOrderTraverse: \n");
    LevelOrderTraverse(bt, TVisit);
	putchar('\n');
	return 0;
}

Status CreateBiTree (BiTree* T)
{
    char *ch;
    ch = (char *)malloc (sizeof (char));
    //printf("Input a Tree data: \n");
    scanf ("%c", ch);
    while (getchar() != '\n')
    	continue;
    if (*ch == '*')
        *T = NULL;
    else
    {
        if (!(*T = (struct BiTNode*) malloc (sizeof (struct BiTNode))))
            exit(OVERFLOW);
        (*T)->data = *ch;
        CreateBiTree (&(*T)->lchild);
        CreateBiTree (&(*T)->rchild);
    }
    return OK;
}   // CreateBiTree

Status TVisit(TElemType e)
{
    printf("%4c", e);
    return OK;
}

Status PreOrderTraverseCursive (struct BiTNode* T, Status (* TVisit)(TElemType e))
{
    if (T)
    {
        if (TVisit(T->data))
            if (PreOrderTraverseCursive (T->lchild, TVisit))
                if (PreOrderTraverseCursive (T->rchild, TVisit))
                    return OK;
        return ERROR;
    }
    else
        return OK;
}   //PreOrderTraverse

Status InorderTraverseUnCursive (BiTree T, Status (* TVisit)(TElemType e))
{
    Stack S;
    InitStack(&S);
    BiTree p = T;
    while (p || (!StackEmpty(&S)))
    {
        if (p)
        {
            Push(&S, p);
            p = p->lchild;
        }
        else
        {
            Pop(&S, &p);
            if (!TVisit(p->data))
                return ERROR;
            p = p->rchild;
        }
    }
    return OK;
}

/*
Status InorderTraverseUnCursive (BiTree T, Status (* TVisit)(TElemType e))
{
    Stack *S = (Stack *) malloc (sizeof(Stack));
    BiTree *p = (BiTree *)malloc(sizeof (BiTree));
    S->base = NULL;
    S->top = NULL;
    S->stacksize = 0;
    *p = NULL;

    if (!InitStack(S)) exit(ERROR);
    Push (S, T);
    while (!StackEmpty(S))
    {
        while (GetTop(S, *p) && *p)
            Push (S, (*p)->lchild);
        Pop (S, p);
        if (!StackEmpty(S))
        {
            Pop(S, p);
            if (!TVisit((*p)->data))
                return ERROR;
            Push(S, (*p)->rchild);
        }
    }
    return OK;
}
*/

Status PostOrderTraverseCursive (struct BiTNode *T, Status (* TVisit)(TElemType e))
{
    if (T)
    {
        if (PostOrderTraverseCursive(T->lchild, TVisit))
            if (PostOrderTraverseCursive(T->rchild, TVisit))
                if (TVisit(T->data))
                    return OK;
        return FALSE;
    }
    return OK;
}

Status LevelOrderTraverse (struct BiTNode *T, Status (* TVisit)(TElemType e))
{
    BiTree Queue[100];
    int front,rear;
    if (T==NULL) return ERROR;
    front = -1;
    rear = 0;
    Queue[rear] = T;
    while(front != rear)
    {
        front++;
        TVisit(Queue[front]->data);
        if (Queue[front]->lchild!=NULL)
        {
            rear++;
            Queue[rear]=Queue[front]->lchild;
        }
        if (Queue[front]->rchild!=NULL)
        {
            rear++;
            Queue[rear]=Queue[front]->rchild;
        }
    }
    return OK;
}

