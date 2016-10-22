#include "DefaultDefine.h"

/* link list ADT */
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} *Link, *Position;

typedef struct
{
    Link head, tail;
    int len;
} LinkList;

Status MakeNode (Link *p, const ElemType e);
void FreeNode (Link *p);
Status InitList (LinkList *L);
Status DestroyList (LinkList *L);
Status ClearList (LinkList *L);
Status InsFirst (Link h, Link s);
Status DelFirst (Link h, Link *q);
Status Append (LinkList *L, Link s);
Status Remove (LinkList *L, Link *q);
Status InsBefore (LinkList *L, Link *p, Link s);
Status InsAfter (LinkList *L, Link *p, Link s);
Status SetCurElem (Link *p, const ElemType e);
ElemType GetCurElem (Link p);
Status ListEmpty (const LinkList *L);
int ListLength (const LinkList *L);
Position GetHead (const LinkList *L);
Position GetLast (const LinkList *L);
Position PriorPos (const LinkList *L, const Link p);
Position NextPos (const LinkList *L, const Link p);
Status LocatePos (const LinkList *L, int i, const Link *p);
Status compare (ElemType, ElemType);
Status visit (void);
Position LocateElem (const LinkList L, ElemType e, Status (*compare) (ElemType, ElemType));
Status ListTraverse (const LinkList *L, Status (*visit) (void));
