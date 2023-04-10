//배열선언-2
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //기호상수 정의

int main(void)
{
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;     //0~99까지 난수 생성, 난수를 100으로 나눈 나머지 값
 	for (i = 0; i < SIZE; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	
	return 0;
}
