//while문을 이용한 최대 공약수 구하기
#include <stdio.h>

int main(void)
{
	int x, y, r;

	printf("두 개의 정수를 입력하시오(큰수,작은수): ");
	scanf("%d%d", &x, &y);

	while (y != 0)    //사용자로부터 정수들이 입력되어 x와 y로 저장된 후, 최대 공약수를 계산하는 while 루프로 들어감
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대공약수는 %d입니다.\n", x);

	return 0;
}