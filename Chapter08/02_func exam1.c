//print_stars() �Լ��� 2�� ȣ���� ����ϴ� ���α׷�
#include <stdio.h>

//�Լ� ����
void print_stars()
{
	for (int i = 0; i < 30; i++)
		printf("*");
}

int main(void)
{
	print_stars();    //�Լ� ȣ��
	printf("\nHello World!\n");
	print_stars();    //�Լ� ȣ��
	printf("\n");
	return 0;
}