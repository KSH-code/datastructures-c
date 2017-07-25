/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-25 09:36:26
 * @modify date 2017-07-25 09:36:26
 * @desc [Doubly Linked list]
*/
#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node *next, *prev;
} Node;

typedef struct _DLinkedList
{
    Node *head, *cur;
    int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List *plist);
void ListInsert(List *plist, Data data);

int LFirst(List *plist, Data *pdata);
int LNext(List *plist, Data *pdata);
int LPrevious(List *plist, Data *pdata);

int LCount(List *plist);
#endif