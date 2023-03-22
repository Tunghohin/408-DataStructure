#include <stdlib.h>

typedef int ElemType;

/*
链表的定义
*/
typedef struct LNode
{
    ElemType data;
    struct LNode* next;  
} LNode;

/*
头插法单链表
*/
typedef struct LinkList_HeadInsert
{
    struct LNode* head;   
} LinkList_HeadInsert;

LinkList_HeadInsert* LinkList_HeadInsert_init(LinkList_HeadInsert* L)
{
    struct LNode* s;
    L->head = (LNode*)malloc(sizeof(LNode));
    L->head->next = NULL;

    return L;
}

void LinkLint_HeadInsert_insert(LinkList_HeadInsert*L, ElemType data)
{
    LNode* tmp = (LNode*)malloc(sizeof(LNode));
    tmp->data = data;
    tmp->next = L->head->next;
    L->head->next = tmp;
} 
