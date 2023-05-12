//함수 인수로서의 함수 포인터 -> 함수 포인터도 인수로 전달 가능
#include <stdio.h>
#include <math.h>

double f1(double k);
double f2(double k);
double formula(double(*pf)(double), int n);

int main(void)
{
	printf("%f\n", formula(f1, 10));                   //함수 f1의 주소와 숫자 10을 넘겨줌
	printf("%f\n", formula(f2, 10));
}

double formula(double(*pf)(double), int n)             //pf의 f1을 전달받은 경우 f1, f2를 전달받은 경우 f2
{
	int i;
	double sum = 0.0;

	for (i = 1; i < n; i++)
		sum += pf(i) * pf(i) + pf(i) + 1;
	return sum;
}

double f1(double k)
{
	return 1.0 / k;
}

double f2(double k)
{
	return cos(k);
}