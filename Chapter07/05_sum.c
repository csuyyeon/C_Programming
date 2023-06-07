//while 문을 이용한 합계 프로그램
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;                                   //변수초기화
	sum = 0;                                 //변수초기화

	while (i < 5)                            //5번 반복하면서 사용자가 입력하는 값을 sum에 누적
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		sum = sum + n;
		i++;
	}
	printf("합계는 %d입니다.\n", sum);

	return 0;
}