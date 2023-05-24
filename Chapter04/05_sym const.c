#include <stdio.h>
#define TAX_RATE 0.2                                     //#define을 이용해 기호상수 정의

int main(void)
{
	const int MONTHS = 12;                               //const를 이용해 기호상수 정의
	int m_salary, y_salary;

	printf("월급을 입력하세요: ");
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);

	return 0;
}
