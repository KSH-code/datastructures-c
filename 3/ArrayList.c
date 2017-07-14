/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-14 10:38:10
 * @modify date 2017-07-14 10:38:10
 * @desc [ArrayList.h를 구현]
*/
#include "ArrayList.h"
void ListInit(List *plist)
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}
void LInsert(List *plist, LData data)
{
    if (plist->numOfData >= LIST_LEN)
    {
        printf("저장이 불가능합니다.\n");
        return;
    }
    plist->arr[(plist->numOfData)++] = data;
}
int LFirst(List *plist, LData *pdata)
{
    if (plist->numOfData == 0)
    {
        return FALSE;
    }
    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List *plist, LData *pdata)
{
    if (plist->curPosition >= (plist->numOfData) - 1)
    {
        return FALSE;
    }
    (plist->curPosition)++;
    *pdata = plist->arr[plist -> curPosition];
    return TRUE;
}
LData LRemove(List *plist)
{
    int rpos = plist->curPosition;
    int length = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];
    for (i = rpos; i < length - 1; i++)
        plist->arr[i] = plist->arr[i + 1];
    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}
int LCount(List *plist)
{
    return plist->numOfData;
}