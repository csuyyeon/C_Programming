//반환값 이용
#include <stdio.h>

int main(void)
{
	int x, y, z;
	if (scanf("%d%d%d", &x, &y, &x) == 3)
		printf("정수들의 합은 %d\n", x + y + z);
	else
		printf("입력값이 올바르지 않습니다.\n");

	return 0;
}