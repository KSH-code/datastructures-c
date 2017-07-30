/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-26 10:16:19
 * @modify date 2017-07-30 10:44:06
 * @desc [리스트 기반 스택 구현 파일]
*/
#include <stdio.h>
#include "ListBaseStack.h"
void StackInit(Stack *pstack)
{
    pstack->head = NULL;
}

int SIsEmpty(Stack *pstack)
{
    if (pstack->head == NULL)
        return TRUE;
    return FALSE;
}

void SPush(Stack *pstack, Data data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = pstack->head;

    pstack->head = newNode;
}

Data SPop(Stack *pstack)
{
    Data rdata;
    Node *rnode;

    if (SIsEmpty(pstack))
    {
        printf("데이터가 없다.\n");
    }
    else
    {
        rdata = pstack->head->data;
        rnode = pstack->head;

        pstack->head = pstack->head->next;
        free(rnode);
        return rdata;
    }
}

Data SPeek(Stack *pstack)
{
    Data rdata;

    if (SIsEmpty(pstack))
    {
        printf("데이터가 없다.\n");
    }
    else
    {
        rdata = pstack->head->data;
        return rdata;
    }
}