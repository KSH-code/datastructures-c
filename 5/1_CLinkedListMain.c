/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-25 09:10:55
 * @modify date 2017-07-25 09:10:55
 * @desc [원형 연결 리스트 실행 파일]
*/
#include <stdio.h>
#include "CLinkedList.h"
int main(void)
{
    List list;
    int data, i, nodeNum;
    ListInit(&list);

    ListInsert(&list, 3);
    ListInsert(&list, 4);
    ListInsert(&list, 5);
    ListInsert(&list, 2);
    ListInsert(&list, 1);
    ListInsert(&list, 7);
    ListInsert(&list, 6);

    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        for (i = 0; i < LCount(&list) * 3 - 1; i++)
            if (LNext(&list, &data))
                printf("%d ", data);
    }
    printf("\n");

    nodeNum = LCount(&list);
    if (nodeNum != 0)
    {
        LFirst(&list, &data);
        if (data % 2 == 0)
            LRemove(&list);
        for (i = 0; i < LCount(&list) - 1; i++)
            LNext(&list, &data);
        if (data % 2 == 0)
            LRemove(&list);
    }
    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        for (i = 0; i < LCount(&list) - 1; i++)
            if (LNext(&list, &data))
                printf("%d ", data);
    }
    system("pause");
    return 0;
}