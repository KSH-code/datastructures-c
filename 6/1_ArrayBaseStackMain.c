/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-26 10:03:10
 * @modify date 2017-07-26 10:03:10
 * @desc [배열 기반 스택 실행]
*/
#include <stdio.h>
#include "ArrayBaseStack.h"
int main(void)
{
    Stack stack;
    StackInit(&stack);

    SPush(&stack, 1);
    SPush(&stack, 2);
    SPush(&stack, 3);
    SPush(&stack, 4);
    SPush(&stack, 5);

    while (!SIsEmpty(&stack))
        printf("%d ", SPop(&stack));
    printf("\n\n");
    while (!SIsEmpty(&stack))
        printf("%d ", SPop(&stack));
    system("pause");
    return 0;
}