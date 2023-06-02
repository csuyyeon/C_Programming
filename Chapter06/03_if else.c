//if문을 사용하여 홀수와 짝수를 구별하는 프로그램
#include <stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number % 2 == 0)                                  //2로 나눈 나머지가 0이면 참
		printf("입력된 정수는 짝수입니다\n");             //number를 2로 나눈 나머지가 0이면 짝수라는 메세지 출력
	else
		printf("입력된 정수는 홀수입니다\n");             //2로 나눈 나머지가 0이 아니면 홀수라는 메세지 출력

	return 0;
}