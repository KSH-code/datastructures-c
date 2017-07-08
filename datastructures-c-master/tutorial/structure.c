#include <stdio.h>
//http://jdpb.tistory.com/entry/C%EC%96%B8%EC%96%B4-typedef%EC%99%80-%EA%B5%AC%EC%A1%B0%EC%B2%B4-%ED%99%9C%EC%9A%A9
typedef int Hello; //int 자료형을 Hello로도 사용 가능하다.
struct point{//구조체
	int x,y;
};
typedef struct point Point;

typedef struct radius{
	int a;
	struct point *center;
}Radius;

int main(int argc, char *argv[]) {
	Hello i = 200;
	Point p={1,2};
	Radius r;
	Hello a=10;
	r.a=a;
	r.center =&p;
	printf("%d\n",i);
	printf("(%d,%d) radius : %d\n",p.x,p.y,a);
	printf("(%d,%d) radius : %d\n",(r.center)->x,(r.center)->y,r.a);
	return 0;
}
