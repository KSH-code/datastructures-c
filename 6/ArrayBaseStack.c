/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-26 09:56:49
 * @modify date 2017-07-26 09:56:49
 * @desc [배열 기반 스택 구현 파일]
*/
#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack *pstack)
{
    pstack->topIndex = -1;
}

int SIsEmpty(Stack *pstack)
{
    if (pstack->topIndex == -1)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack *pstack, Data data)
{
    if (pstack->topIndex < STACK_LEN)
    {
        pstack->topIndex++;
        pstack->stackArr[pstack->topIndex] = data;
    }
    else
        printf("데이터가 꽉 찼다.\n");
}

Data SPop(Stack *pstack)
{
    int rIdx;
    Data data;
    if (SIsEmpty(pstack))
    {
        printf("데이터가 없다.\n");
    }
    else
    {
        rIdx = pstack->topIndex;
        pstack->topIndex--;
        data = pstack->stackArr[rIdx];
        return data;
    }
}

Data SPeek(Stack *pstack)
{
    Data data;
    if (SIsEmpty(pstack))
    {
        printf("데이터가 없다.\n");
    }
    else
    {
        data = pstack->stackArr[pstack->topIndex];
        return data;
    }
}