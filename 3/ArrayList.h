/**
 * @author [KSH-code]
 * @email [tjdgnsqn133@gmail.com]
 * @create date 2017-07-14 10:33:19
 * @modify date 2017-07-14 10:33:19
 * @desc [ListMain.c에서 사용할 라이브러리]
*/
#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

typedef int LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;  //data length
    int curPosition //current postion
} ArrayList;
typedef ArrayList List;

void ListInit(List *plist);
void LInsert(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist); //참조한 데이터 삭제
int LCount(List *plist);    //저장된 데이터의 수 리턴