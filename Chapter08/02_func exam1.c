//print_stars() 함수를 2번 호출해 출력하는 프로그램
#include <stdio.h>

//함수 정의
void print_stars()
{
	for (int i = 0; i < 30; i++)
		printf("*");
}

int main(void)
{
	print_stars();    //함수 호출
	printf("\nHello World!\n");
	print_stars();    //함수 호출
	printf("\n");
	return 0;
}