#include <stdio.h>

int main(void)
{
	int i, n, sum;                                              //변수선언

	printf("정수를 입력하시오: ");                              //입력 안내 메시지 출력
	scanf("%d", &n);                                            //정수값 입력

	i = 1;                                                      //변수 초기화
	sum = 0;                                                    //변수 초기화

	while (i <= n)                                              //i를 1씩 증가시키면서 sum에 누적
	{
		sum += i;
		i++;
	}

	printf("i부타 %d까지의 합은 %d입니다.\n", n, sum);
	return 0;
}