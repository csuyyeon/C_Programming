/*10������ 2������ ����ϱ�*/
#include <stdio.h>

int main(void)
{
	unsigned int num;
	printf("10����:");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;                         //mask = 1000000
	printf("2����:");

	((num & mask) == 0) ? printf("0") : printf("1");    //���������� 1��Ʈ �̵�
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