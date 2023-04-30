//2차원 배열로 입력
#include <stdio.h>
int main(void)
{
	int i;
	char fruits[3][20];
	for (i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오: ", fruits[i]);
		scanf("%s", fruits[i]);
	}
	for (i = 0; i < 3; i++)
		printf("%d번째 과일: %s\n", i, fruits[i]);
	return 0;
}//문자열의 배열을 통해 여러 개의 문자열들을 저장할 수 있음