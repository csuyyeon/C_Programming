//나눗셈을 하기 전에 분모가 0인지를 if-else문을 이용하여 검사
#include <stdio.h>

int main(void)
{
	int n, d, result;

	printf("분자를 입력하시오:");
	scanf("%d", &n);

	printf("분모를 입력하시오:");
	scanf("%d", &d);

	if (d == 0)                                //분모가 0이면 오류 처리
	{
		printf("0으로 나눌 수 없습니다\n");
	}
}