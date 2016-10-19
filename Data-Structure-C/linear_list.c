#include "DefaultDefine.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;
typedef struct {
    ElemType *elem;
    int length;
    int listsize;
} SqList;

Status InitList(SqList *L);
Status DestroyList (SqList *L);
Status ClearList (SqList *L);
Status ListEmpty (SqList *L);
int ListLength (const SqList *L);
Status GetElem (const SqList *L, int i, ElemType *e);
Status Compare (const ElemType a, const ElemType b);
int LocateElem (const SqList *L, const ElemType e, Status (*compare)(ElemType, ElemType));
Status PriorElem (const SqList *L, const ElemType *cur_e, ElemType *pre_e);
Status NextElem (const SqList *L, const ElemType *cur_e, ElemType *next_e);
Status ListInsert (SqList *L, int i, ElemType *e);
Status ListDelete (SqList *L, int i, ElemType *e);
Status ListTraverse (const SqList *L, Status (*visit) (const ElemType e));
void MergeList (const SqList *La, const SqList *Lb, SqList *Lc);

int main (void)
{
    return 0;
}

Status InitList (SqList *L)
{   // 构造一个空的线性表L
    L->elem = (ElemType *) malloc (LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem) exit(OVERFLOW);
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
} // InitList

Status ListInsert (SqList *L, int i, ElemType *e)
{ //在表L第i个位置插入元素e
    ElemType *newbase;
    ElemType *q;
    ElemType *p;
    if (i < 1 || i > L->length + 1) return ERROR;
    if (L->length >= L->listsize)
    {
        newbase = (ElemType *) realloc (L->elem, (L->listsize +
                    LISTINCREMENT) * sizeof (ElemType));
        if (!newbase) exit(OVERFLOW);
        L->elem = newbase;
        L->listsize += LISTINCREMENT;
    }
    q = L->elem + i -1;
    for (p = L->elem + L->length -1; p >= q; --p)
        *(p + 1) = *p;
    *q = *e;
    L->length += 1;
    return OK;
} // ListInsert

Status ListDelete (SqList *L, int i, ElemType *e)
{   // 删除L中第i个元素
    ElemType *p;
    ElemType *q;
    if (i < 1 || i > L->length) return ERROR;
    e = p = L->elem + i;
    q = L->elem + L->length -1;
    for (++p; p <= q; p++)
        *(p - 1) = *p;
    L->length -= 1;
    return OK;
} // ListDelete
