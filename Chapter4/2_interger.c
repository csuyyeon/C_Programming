/*���� �ڷ����� ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	short year = 0;                         //short�� ���� ����
	int sale = 0;                           //int�� ���� ����
	long total_sale = 0;                    //long�� ���� ����
	long long large_value;                  //64��Ʈ ������

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale=%d\n", total_sale);

	return 0;
}