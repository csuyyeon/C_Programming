//함수 포인터의 배열: 함수들을 연결할 수 있는 포인터가 여러 개 존재하는 함수 포인터 배열
#include <stdio.h>
//함수 원형 정의
void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{
	printf("------------------------------------\n");
	printf("0. 덧셈\n");
	printf("1. 뻴셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("------------------------------------\n");
}

int main(void)
{
	int choice, result, x, y;
	int(*pf[4])(int, int) = { add,sub,mul,div };               //함수 포인터 배열을 선언하고 초기화

	while (1)
	{
		menu();
		printf("메뉴를 선택하세요: ");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;
		printf("2개의 정수를 입력하시오: ");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);                             //함수 포인터를 이용한 함수 호출
		printf("연산 결과 = %d\n", result);
	}
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int dix(int x, int y)
{
	return x / y;
}