//for문을 이용한 정수 합
#include <stdio.h>

int main(void)
{
	int sum;     //정수들의 합을 sum에 저장

	sum = 0;
	for (int i = 1; i <= 10; i++)      //i는 1부터 10싸지 증가, 11이 반복되면 반복 루프 종료, 반복 루프 안에서 sum에 i의 값이 더해짐
		sum += i;

	printf("1부터 10까지의 정수의 합 = %d\n", sum);     //for문이 끝나면 실행, sum의 값이 출력

	return 0;
}