/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-14 10:31:50
 * @modify date 2017-07-14 10:31:50
 * @desc [리스트의 ADT를 기반으로 정의된 main]
*/
#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 11);
    LInsert(&list, 12);
    LInsert(&list, 15);
    LInsert(&list, 13);
    LInsert(&list, 17);
    LInsert(&list, 10);

    printf("List length = %d\n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    if (LFirst(&list, &data))
    {
        if (data == 17)
            LRemove(&list);
        while (LNext(&list, &data))
            if (data == 17)
                LRemove(&list);
    }

    printf("List length = %d\n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    system("pause");
    return 0;
}