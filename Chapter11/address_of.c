//변수의 주소
#include <stdio.h>
int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소: %u\n", &i);     //변수 i의 주소 출력
	printf("c의 주소: %u\n", &c);     //변수 c의 주소 출력
	printf("f의 주소: %u\n", &f);     //변수 f의 주소 출력
	
	return 0;
} //& 연산자를 사용하면 그 변수가 위치하고 있는 메모리 상의 주소를 알 수 있음