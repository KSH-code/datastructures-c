/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 04:05:16
 * @modify date 2017-07-08 05:40:07
 * @desc [알고리즘스터디 순차 탐색]
*/
#include <stdio.h>
int LSearch(int arr[], int len, int target)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 5, 2, 4, 9};
    int idx = LSearch(arr, sizeof(arr) / 4, 9);
    if (idx == -1)
    {
        //실패
    }
    else
    {
        //성공
    }
    system("pause");
    return 0;
}