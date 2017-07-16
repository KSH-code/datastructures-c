/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-16 08:31:39
 * @modify date 2017-07-16 08:31:39
 * @desc [배열]
*/
#include <stdio.h>

int main(void)
{
    int arr[10];
    int readCount = 0;
    int readData;
    int i;
    while (1)
    {
        printf("enter Positive Number : ");
        scanf("%d", &readData);
        if (readData < 1)
            break;

        arr[readCount++] = readData;
    }
    for (i = 0; i < readCount; i++)
        printf("%d ", arr[i]);
    system("pause");
    
    return 0;
}