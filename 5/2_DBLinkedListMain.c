/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-25 09:40:25
 * @modify date 2017-07-25 09:40:25
 * @desc [Doubly Linked List 실행 부분]
*/
#include <stdio.h>
#include "DBLinkedList.h"
int main(void)
{
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);

    if (LFirst(&list, &data))
    {
        printf("%d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);

        printf("\n\n");
        while (LPrevious(&list, &data))
            printf("%d ", data);

        printf("\n\n");
    }
    system("pause");
    return 0;
}