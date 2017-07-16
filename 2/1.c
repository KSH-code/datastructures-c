/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 05:04:17
 * @modify date 2017-07-08 05:39:55
 * @desc [알고리즘 스터디 재귀 호출]
*/
#include <stdio.h>
int Factorial(int num)
{
    if (num == 0)
        return 1;
    return Factorial(num - 1) * num;
}

int main()
{
    printf("%d\n", Factorial(10));
    system("pause");
    return 0;
}