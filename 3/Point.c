/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 08:02:55
 * @modify date 2017-07-16 08:02:55
 * @desc [Point.h 구현]
*/
#include <stdio.h>
#include "Point.h"

void SetPointPos(Point *pos, int x, int y)
{
    pos->x = x;
    pos->y = y;
}

void ShowPointPos(Point *pos)
{
    printf("[%d, %d]\n", pos->x, pos->y);
}

int PointComp(Point *pos1, Point *pos2)
{
    int x1 = pos1->x, x2 = pos2->x;
    int y1 = pos1->y, y2 = pos2->y;

    if (x1 == x2 && y1 == y2)
        return 0;
    else if (x1 == x2)
        return 1;
    else if (y1 == y2)
        return 2;
    else
        return -1;
}