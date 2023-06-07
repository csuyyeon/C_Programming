#include <stdio.h>

int main(void)
{
	int i, n, sum;                                              //변수선언

	printf("정수를 입력하시오: ");                              //입력 안내 메시지 출력
	scanf("%d", &n);                                            //정수값 입력

	i = 0;                                                      //변수 초기화
	sum = 0;                                                    //변수 초기화

	while (i <= n)                                              //i부터 n까지의 짝수들의 합을 구하기 위해 i를 2씩 증가
	{
		sum += i;
		i = i + 2;
	}

	printf("i부타 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}