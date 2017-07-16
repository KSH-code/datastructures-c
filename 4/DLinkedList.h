/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 09:45:11
 * @modify date 2017-07-16 09:45:11
 * @desc [LinkedList based on dummy node header file]
*/
#ifndef __DLL_H__
#define __DLL_H__

#define TRUE 1
#define FALSE 0

typedef int LData;
typedef struct _node
{
    LData data;
    struct _node *next;
} Node;

typedef struct _linkedList
{
    Node *head;
    Node *cur;
    Node *before;
    int numOfData;
    int (*comp)(LData d1, LData d2);
} LinkedList;

typedef LinkedList List;

void ListInit(List *list);
void LInsert(List *list, LData data);

int LFirst(List *list, LData *data);
int LNext(List *list, LData *data);

LData LRemove(List *list);
int LCount(List *list);

void SetSortRule(List *list, int (*comp)(LData d1, LData d2));
#endif