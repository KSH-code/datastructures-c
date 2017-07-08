/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 05:39:10
 * @modify date 2017-07-08 05:39:10
 * @desc [알고리즘 스터디 하노이 타워]
*/
#include <stdio.h>
void Hanoi(int n, char from, char by, char to)
{
    if (n == 1)
    {
        printf("%d %c -> %c\n", n, from, to);
    }
    else
    {
        Hanoi(n - 1, from, to, by);
        printf("%d %c -> %c\n", n, from, to);
        Hanoi(n - 1, by, from, to);
    }
}
int main()
{
    Hanoi(4, 'A', 'B', 'C');
    return 0;
}