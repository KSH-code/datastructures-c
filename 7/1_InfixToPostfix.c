/**
 * @author [KSH-Code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-30 10:23:11
 * @modify date 2017-07-30 10:23:11
 * @desc [중위 표기법을 후위 표기법으로 구현 파일]
*/
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"

/*
    * 연산자의 우선 순의를 반환한다.
*/
int GetOpPrec(char op)
{
    switch (op)
    {
    case '*':
    case '/':
        return 5;
    case '+':
    case '-':
        return 3;
    case '(':
        return 1;
    default:
        return -1;
    }
}

/*
    * 연산자가 존재하면 SPeek 함수를 호출해서 연산자 우선순위 비교
*/
int WhoPrecOp(char op1, char op2)
{
    int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);
    if (op1Prec > op2Prec)
        return 1;
    else if (op1Prec < op2Prec)
        return -1;
    else
        return 0;
}
/*
    * 중위 표기식을 후위 표기식으로 변환
*/
void ConvToRPNExp(char exp[])
{
    Stack stack;
    int expLen = strlen(exp);                   //exp의 길이
    char *convExp = (char *)malloc(expLen + 1); //후위 표기식이 저장될 임시 공간

    int i, idx = 0;
    char tok, popOp;

    memset(convExp, 0, sizeof(char) * expLen + 1);
    StackInit(&stack);
    for (i = 0; i < expLen; i++)
    {
        tok = exp[i];
        if (isdigit(tok)) //정수(숫자)
        {
            convExp[idx++] = tok;
        }
        else
        {
            switch (tok)
            {
            case '(': //여는 괄호를 스택에 저장
                SPush(&stack, tok);
                break;
            case ')': //닫는 괄호가 나오면
                while (1)
                {
                    popOp = SPop(&stack);
                    if (popOp == '(') //여는 괄호가 나올 때 까지 스택에서 뺀다.
                        break;
                    convExp[idx++] = popOp; //후위표기식에 SPop해서 넣어준다.
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':

                while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0) //stakc이 empty하지 않고, 현재 tok값이 stack 보다 크거나 작으면
                    convExp[idx++] = SPop(&stack);                              //들어있는걸 빼서 후위표기식에 저장한다.
                SPush(&stack, tok);                                             //아니면 tok를 넣는다.
            }
        }
    }
    while (!SIsEmpty(&stack))
        convExp[idx++] = SPop(&stack);
    strcpy(exp, convExp);
    free(convExp);
}