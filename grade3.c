#include <stdio.h>
#include <stdlib.h>
#define SIZE 5          //기호상수 SIZE, 학생들의 수를 변경하려면 이 기호상수의 정의만 변경=간단

int main(void)
{
	int i;
	int grade[SIZE];
	printf("5명의 점수를 입력하시오\n");

	for (i = 0; i < SIZE; i++)
		scanf("%d", &grade[i]); //&:변수가 실제로 저장된 위치 
	
	for (i = 0; i < SIZE; i++)
		pirntf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}