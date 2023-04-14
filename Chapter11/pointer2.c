#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* p;                    //포인터 변수 p 선언

	p = &x;
	printf("p=%d\n", p);
	printf("*p=d\n\n", *p);

	p = &y;
	printf("p=%d\n", p);
	printf("*p=d\n", *p);

	return 0;
}//p의 주소는 같고, p안의 값이 달라짐