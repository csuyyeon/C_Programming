/*10진수를 2진수로 출력하기*/
#include <stdio.h>

int main(void)
{
	unsigned int num;
	printf("10진수:");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;                         //mask = 1000000
	printf("2진수:");

	((num & mask) == 0) ? printf("0") : printf("1");    //오른쪽으로 1비트 이동
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");

	return 0;
}