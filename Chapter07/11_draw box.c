//for문을 이용한 네모 그릭
#include <stdio.h>

int main(void)
{
	printf("**********\n");

	for (int i = 0; i < 5; i++)         //i가 0부터 4까지 총 5번 반복, i가 5가 되면 반복루프를 빠져나옴
		printf("*        *\n");

	printf("**********\n");

	return 0;
}