//전역변수: 함수 외부에서 선언되는 변수
#include <stdio.h>
//함수 외부에 선언되어 전역변수
int A;   
int B;

int add()
{
	return A + B;
}

int main()
{
	int answer;   //지역변수
	A = 5;
	B = 7;
	answer = add();
	printf("%d+%d=%d\n", A, B, answer);
	return 0;
}
