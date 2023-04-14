#include <stdio.h>
int main(void)
{
	int i = 3000;               //메모리의 4byte 공간에 변수 i가 선언되고 3000 값을 넣어줌
	int* p = &i;                //포인터 변수 선언, 변수와 포인터 연결

	printf("&i=%u\n", &i);      //변수의 주소 출력, 포인터 변수p 선언 후 변수i에 &를 사용하여 메모리 시작주소 값을 포인터 변수 p에 넣어줌  
	printf("i=%d\n", i);        //변수의 값 출력 
	printf("*p=%d\n", *p);      //포인터를 통한 간접 참조 값 출력
	printf("p=%u\n", p);        //포인터의 값 출력

	return 0;
}