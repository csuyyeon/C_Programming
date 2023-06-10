//for문을 이용한 팩토리얼 구하기
#include <stdio.h>

int main(void)
{
	long fact = 1;                          //팩토리얼 값이 커질 수 있으므로 long형으로 정의, 초기값이 반드시 1
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);                        //사용자로부터 입력 받은 정수는 변수 n에 저장

	for (int i = 1; i <= n; i++)            //for루프를 사용하여 fact에 i의 값을 곱한 결과값을 다시 fact에 저장
		fact = fact * i;

	printf("%d!는 %d입니다.\n", n, fact);

	return 0;
}