//2진수 형식으로 출력
#include <stdio.h>
void print_binary(int x);

int main(void)
{
	printf_binary(9);
	printf("\n");
	return 0;
}

void print_binary(int x)
{
	if (x > 0)
	{
		printf_binary(x / 2);          //순환호출
		print("%d", x % 2);            //나머지를 출력
	}
}