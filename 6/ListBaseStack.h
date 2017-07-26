/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-26 10:12:30
 * @modify date 2017-07-26 10:12:30
 * @desc [리스트 기반 스택 헤더 파일]
*/
#ifndef __LIST_BASE_STACK_H__
#define __LIST_BASE_STACK_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node *next;
} Node;

typedef struct _listStack
{
    Node *head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack *pstack);

int SIsEmpty(Stack *pstack);
void SPush(Stack *pstack, Data data);

Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif