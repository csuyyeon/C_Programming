#include <stdio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i=%d\n", i);

	*p = 20;                      //p가 연결된 i의 값을 새로운 값으로 변경->포인터를 통하여 변수의 값을 변경
	printf("i=%d\n", i);
	return 0;
}//포인터 변수에 연결된 값을 할당하면서 변경시킬 수 있다