//���� ó�� ���̺귯�� �Լ�
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getch() != 'z'))
	{
		printf("------------------------------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c));             //�������� �˻�
		printf("isalpha(%c) = %d\n", c, isalpha(c));             //���ĺ����� �˻�
		printf("islower(%c) = %d\n", c, islower(c));             //�ҹ������� �˻�
		printf("ispunct(%c) = %d\n", c, ispunct(c));             //������ �������� �˻�
		printf("ixsdigit(%c) = %d\n", c, isxdigit(c));           //16�������� �˻�
		printf("isprint(%c) = %d\n", c, isprint(c));             //��°������� �˻�
		printf("------------------------------------\n\n");
	}
	return 0;
}