//조합 값 구하기
#include <stdio.h>
//팩토리얼 값을 이용해 조합값을 계산
int combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}
//사용자로부터 값을 입력받아 반환
int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	return n;
}
//팩토리얼 값을 반환
int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)       //팩토리얼은 반복구조를 사용하여 1부터 n까지의 값을 변수 result에 곱한다. 초기값은 반드시 1 
		result *= i;

	return result;
}

int main(void)
{
	int a, b;

	a = get_integer();             //get_integer()를 2번 호출하여 사용자로부터 정수를 입력받음
	b = get_integer();

	printf("C(%d,%d)=%d\n", a, b, combination(a, b));  

	return 0;
}