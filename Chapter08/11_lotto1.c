//난수: 규칙성 없이 임의로 생성되는 수
//rand(): 난수를 생성하는 함수
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 6; i++)
		printf("%d", rand());          //호출할 때마다 난수가 생성
	printf("\n");
	return 0;
}