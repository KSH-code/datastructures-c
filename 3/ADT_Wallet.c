/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-14 10:03:57
 * @modify date 2017-07-14 10:03:57
 * @desc [지갑을 사용해 ADT를 설명한다.]
*/
#include <stdio.h>
typedef struct _wallet
{
    int coin100;
    int bill5000;
} Wallet;
/*
    Wallet 자료형 정의
*/
void TakeOutMoney(Wallet *w, int c, int b)
{
    w->coin100 = c;
    w->bill5000 = b;
}
void PutMoney(Wallet *w, int c, int b)
{
    w->coin100 = c;
    w->bill5000 = b;
}
//순수하게 기능이 무엇인지를 나열한 것을 ADT (75p)
int main(void)
{
    Wallet mW;
    PutMoney(&mW, 5, 1);
    printf("%d %d\n", (&mW)->coin100, (&mW)->bill5000);
    TakeOutMoney(&mW, 2, 0);
    printf("%d %d\n", (&mW)->coin100, (&mW)->bill5000);
    return 0;
}