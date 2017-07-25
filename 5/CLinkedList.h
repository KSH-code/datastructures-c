/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-25 09:02:49
 * @modify date 2017-07-25 09:02:49
 * @desc [원형 연결 리스트 헤더 파일]
*/
#ifndef __C_LINKED__LIST_H__
#define __C_LINKED__LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;
typedef struct _node
{
    Data data;
    struct _nodde *next;
} Node;

typedef struct _CLL
{
    Node *tail, *cur, *before;
    int numOfData;
} CList;
typedef CList List;

void ListInit(List *plist);
void ListInsert(List *plist, Data data);      //꼬리에 노드를 추가
void ListInsertFront(List *plist, Data data); //머리에 노드를 추가

int LFirst(List *plist, Data *pdata);
int LNext(List *plist, Data *pdata);
Data LRemove(List *plist);
int LCount(List *plist);
#endif