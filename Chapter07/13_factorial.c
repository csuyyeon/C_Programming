//while문을 이용한 팩토리얼 구하기
#include <stdio.h>

int main(void)
{
	long fact = 1;                          //팩토리얼 값이 커질 수 있으므로 long형으로 정의, 초기값이 반드시 1
	int i, n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);                        //사용자로부터 입력 받은 정수는 변수 n에 저장

	i = 0;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}

	printf("%d!는 %d입니다.\n", n, fact);

	return 0;
}