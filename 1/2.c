/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-08 05:04:03
 * @modify date 2017-07-08 05:40:04
 * @desc [알고리즘 스터디 이진탐색]
*/
#include <stdio.h>

int BSearch(int arr[], int len, int target)
{
    int f = 0;
    int l = len - 1;
    int mid;
    while (f <= l) //만났을 때 한번 더 검색
    {
        mid = (f + l) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else
        {
            if (target < arr[mid])
            {
                l = mid - 1;
            }
            else
            {
                f = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int idx;
    idx = BSearch(arr, sizeof(arr) / 4, 17);
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