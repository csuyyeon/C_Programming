//관계연산자: 두 개의 피연산자를 비교하는데 사용
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d%d", &x, &y);

	printf("x==y의 결과값: %d\n", x == y);
	printf("x!=y의 결과값: %d\n", x != y);
	printf("x>y의 결과값: %d\n", x > y);
	printf("x<y의 결과값: %d\n", x < y);
	printf("x>=y의 결과값: %d\n", x >= y);
	printf("x<=y의 결과값: %d\n", x <= y);    //관계연산자의 결과는 1또는 0

	return 0;
}