//난수 생성 프로그램
#include <stdlib.h>                     //rand() 원형 정의
#include <stdio.h>                      
#include <time.h>                       //time() 원형 정의
#define MAX 45

int main(void)
{
	int i;

	srand((unsigned)time(NULL));        //srand()는 난수 시드를 설정, 시드는 난수 발생기에서 다음 난수를 꼐산하기 위해 사용하는 변수

	for (i = 0; i < 6; i++)
		printf("%d", 1 + rand() % MAX);
	printf("\n");
	
	return 0;
}