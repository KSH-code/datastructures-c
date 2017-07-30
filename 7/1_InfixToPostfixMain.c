/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-30 10:39:54
 * @modify date 2017-07-30 10:39:54
 * @desc [중위 표기식 -> 후위표기식 실행 파일]
*/
#include <stdio.h>
#include "1_InfixToPostfix.h"

int main(void)
{
    char exp1[] = "1+2*3";
    char exp2[] = "(1+2)*3";
    char exp3[] = "((1-2)+3)*(5-2)";

    ConvToRPNExp(exp1);
    ConvToRPNExp(exp2);
    ConvToRPNExp(exp3);

    printf("%s \n", exp1);
    printf("%s \n", exp2);
    printf("%s \n", exp3);
    system("pause");
}