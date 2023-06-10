//for문을 이용한 세제곱 값 구하기
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("=============================\n");
	printf("  i        i의 세제곱\n");
	printf("=============================\n");

	for (int i = 1; i <= n; i++)                     //변수 i를 1부터 n까지 1씩 증가시키면서 화면에 출력
		printf("%5d %5d\n", i, i * i * i);           //%5d는 정수를 10진수 형태로 출력하고 출력 필드의 폭은 5글자를 의미

	return 0;
}