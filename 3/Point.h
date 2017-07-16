/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 07:59:43
 * @modify date 2017-07-16 07:59:43
 * @desc [리스트에 구조체 변수 저장하기]
*/
#ifndef Point_H
#define Point_H

typedef struct _point
{
    int x;
    int y;
} Point;
// Set pos
void SetPointPos(Point *pos, int x, int y);

// Print pos
void ShowPointPos(Point *pos);

// Compare pos1 to pos2
int PointComp(Point *pos1, Point *pos2);
#endif