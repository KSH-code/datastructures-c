/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 08:07:17
 * @modify date 2017-07-16 08:07:17
 * @desc [List에 구조체를 넣는다.]
*/
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(void)
{
    List list;
    Point compPos;
    Point *pos;

    ListInit(&list);

    pos = (Point *)malloc(sizeof(Point));
    SetPointPos(pos, 2, 0);
    LInsert(&list, pos);

    pos = (Point *)malloc(sizeof(Point));
    SetPointPos(pos, 2, 1);
    LInsert(&list, pos);

    pos = (Point *)malloc(sizeof(Point));
    SetPointPos(pos, 2, 2);
    LInsert(&list, pos);

    pos = (Point *)malloc(sizeof(Point));
    SetPointPos(pos, 3, 1);
    LInsert(&list, pos);

    pos = (Point *)malloc(sizeof(Point));
    SetPointPos(pos, 3, 2);
    LInsert(&list, pos);

    printf("Currrent List Length: %d\n", LCount(&list));

    if (LFirst(&list, &pos))
    {
        ShowPointPos(pos);
        while (LNext(&list, &pos))
            ShowPointPos(pos);
    }
    printf("\n");

    compPos.x = 2;
    compPos.y = 0;

    if (LFirst(&list, &pos))
    {
        if (PointComp(pos, &compPos) == 1)
        {
            pos = LRemove(&list);
            free(pos);
        }
        while (LNext(&list, &pos))
            if (PointComp(pos, &compPos) == 1)
            {
                pos = LRemove(&list);
                free(pos);
            }
    }
    printf("\n");
    printf("Currrent List Length: %d\n", LCount(&list));

    if (LFirst(&list, &pos))
    {
        ShowPointPos(pos);
        while (LNext(&list, &pos))
            ShowPointPos(pos);
    }
    printf("\n");
    system("pause");
    return 0;
}