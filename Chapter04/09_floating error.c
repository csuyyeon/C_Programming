#include <stdio.h>

int main(void)
{
	double x;

	x = (1.0e20 + 5.0) - 1.0e20;   //부동 소수점 연산에서는 오차 발생, 5.0이 아닌 0으로 계산됨
	printf("%f\n", x);
	return 0;
}
