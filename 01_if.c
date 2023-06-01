#include <stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하세요: ");
	scanf("%d", &number);

	if (number > 0)                                //number가 0보다 크면 printf 문장이 실행
		printf("양수입니다\n");

	printf("입력된 값은 %d입니다.\n", number);     //if문이 실행된 후에 항상 실행
	return 0;
}