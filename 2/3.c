/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 05:12:59
 * @modify date 2017-07-08 05:12:59
 * @desc [이진 탐색 알고리즘 재귀적 구현]
*/
#include <stdio.h>
#include <locale.h>
int BSearchRecur(int arr[], int f, int l, int target)
{
    int mid = (f + l) / 2;
    if (f > l)
        return -1;
    if (arr[mid] == target)
        return target;
    else if (target < arr[mid])
        return BSearchRecur(arr, f, mid - 1, target);
    else
        return BSearchRecur(arr, mid + 1, l, target);
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int idx = BSearchRecur(arr, 0, sizeof(arr) / 4, 7);
    setlocale(LC_ALL, "");
    if (idx == -1)
        wprintf(L"못 찾음\n");
    else
        wprintf(L"찾음\n");
    system("pause");
    return 0;
}