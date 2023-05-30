//형변환 예제 프로그램
#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;

	c = 10000;                               //내림변환으로 int->char, 일부 값이 잘리게 됨
	i = 1.23456 + 10;                        //내림변환으로 double->int, 소수점 이하가 사라짐
	f = 10 + 20;                             //올림변환으로 int->float, 정수가 실수가 됨

	printf("c=%d,i=%d,f=%f\n", c, i, f);

	return 0;
}