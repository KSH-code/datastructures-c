/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 05:08:23
 * @modify date 2017-07-08 05:39:41
 * @desc [알고리즘 스터디 피보나치 수열]
*/
#include <stdio.h>
#include <locale.h>
int Fibo(int n)
{
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int n = 10;
    setlocale(LC_ALL, "");
    wprintf(L"피보나치 수열 %d 번째 값은 %d\n", n, Fibo(n));
    system("pause");
    return 0;
}