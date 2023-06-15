//반환값: 함수가 호출한 곳으로 반환, 인수는 여러 개가 있을 수 있으나 반환값은 하나만 가능
//반환값의 형은 함수를 정의할 때 기술했던 반환값의 형과 일치
#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	int larger;
	larger = max(x, y);
	printf("더 큰 값은 %d입니다.\n", larger);
	return 0;
}