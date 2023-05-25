/*산술연산자*/
#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("두개의 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);                   //형식지정자 %d를 두 번 써서 두개의 정수를 호출하여 한번에 입력받음

	result = x + y;                           //덧셈 연산, 덧셈 연산 결과를 result에 대입
	printf("%d+%d=%d\n", x, y, result);

	result = x - y;                           //뺄셈 연산
	printf("%d-%d=%d\n", x, y, result);

	result = x * y;                           //곱셈 연산
	printf("%d*%d=%d\n", x, y, result);

	result = x / y;                           //나눗셈 연산, 정수를 정수로 나누면 계산 결과에서 소수점 이하는 버려짐
	printf("%d/%d=%d\n", x, y, result);

	result = x % y;                           //나머지 연산
	printf("%d%%%d=%d\n", x, y, result);

	return 0;

}