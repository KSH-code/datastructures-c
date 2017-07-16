/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 10:10:10
 * @modify date 2017-07-16 10:10:10
 * @desc [LinkedList based on dummy node launch]
*/
#include <stdio.h>
#include "DLinkedList.h"

int main(void)
{
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);

    printf("current data length: %d\n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    if (LFirst(&list, &data))
    {
        if (data == 22)
            LRemove(&list);
        while (LNext(&list, &data))
            if (data == 22)
                LRemove(&list);
    }
    printf("current data length: %d\n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    system("pause");
    return 0;
}