//2���� �������� ���
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
		printf_binary(x / 2);          //��ȯȣ��
		print("%d", x % 2);            //�������� ���
	}
}