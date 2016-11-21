#include "base.h"
typedef char TElemType;

typedef struct {
	TElemType data;
	BiTNode *lchild;
	BiTNode *Rchild;
} BiTNode, *BiTree;
/*
Status CreateBiTree (BiTree *T);
Status PreOrderTraverse (BiTree *T, Status (* Visit) (TElemType e));
Status InorderTraverse (BiTree *T, Status (* Visit) (TElemType e));
Status PostOrderTraverse (BiTree *T, Status (* Visit) (TElemType e));
Status LevelOrderTraverse (BiTree *T, Status (* Visit) (TElemType e));
*/
Status CreateBiTree (BiTree T)
{
	char ch;
	scanf ("%s", &ch);
	if (ch == '')
		T = NULL;
	else 
	{
		if (!(T = (BiTNode *) malloc (sizeof (BiTNode))))
			exit(OVERFLOW);
		T->data = ch;
		CreateBiTree (T->lchild);
		CreateBiTree (T->rchild);
	}
	return OK;
}	// CreateBiTree

Status PreOrderTraverse (BiTree T, Status (* Visit)(TElemType e))
{
	if (T)
	{
		if (Visit(T->data))
			if (PreOrderTraverse (T->lchild, Visit))
				if (PreOrderTraverse(T->rchild, Visit))
					return OK;
		return ERROR;
	}
	else
		return OK;
}	//PreOrderTraverse

Status InorderTraverse (BiTree T, Status (* Visit)(TElemType e))
{
	Stack *S;
	BiTree p;
	InitStack (S);
	Push (S, T);
	while (!StackEmpty(S))
	{
		while (GetTop(S, p) && p)
			Push (S, p->lchild);
		Pop (S, p);
		if (!StackEmpty(S))
		{
			Pop(S, p);
			if (!Visit(p->data))
				return ERROR;
			Push(S, p->rchild);
		}
	}
	return OK;
}

Status PostOrderTraverse (BiTree T, Status (* Visit)(TElemType e))
{
	if (T)
	{
		if (Visit(T->data))
			if (PostOrderTraverse(T->lchild), Visit)
				if (PostOrderTraverse(T->rchild, Visit))
					return OK;
		return ERROR;
	}
	else
		return OK;
}
Status PostOrderTraverse_U (BiTree T, Status (* Visit)(TElemType e))
{
	Stack *S;
	BiTree p;
	InitStack(S);
	Push(S, T);
	while (!StackEmpty(S))
	{
		while (GetTop(S, p) && p)
			Push (S, p->lchild);
		Pop (S, p);
		if (!StackEmpty(S))
		{
			Pop(S, p);
			if (!Visit(p->data))
				return ERROR;
			Push(S, p->rchild);
		}
	}
	return OK;
}
Status LevelOrderTraverse (BiTree T, Status (* Visit)(TElemType e));
/*
- + a N
- + N	(a)
- + * b
- + *	(a, b)
- + * - c
- + * - (a, b, c)
- + * - d
- + * - (a, b, c, d)
- + * (a, b, c, d, -)
- + (a, b, c, d, -, *)
- 	(a, b, c, d, -, *, +)
- / e
- / (a, b, c, d, -, *, +, e)
- / f 
- / (a, b, c, d, -, *, +, e)
- 	(a, b, c, d, -, *, +, e, /)
	(a, b, c, d, -, *, +, e, /, -)
*/