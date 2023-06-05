//간단한 산술계산기 프로그램
#include <stdio.h>

int main(void)
{
	char op;                                            //char형 변수 op 선언, 연산자를 나타내는 기호가 저장
	int x, y, result;                                   //int형 변수 x와 y선언, x와 y에 피연산자가 저장 

	printf("수식을 입력하시오(예:2+5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')                                      //연속적인 if문을 사용해 연산자를 분류
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연산자입니다.\n");

	
	return 0;
}