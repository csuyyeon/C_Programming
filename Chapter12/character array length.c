//���ڿ� ���� ���
#include <stdio.h>

int main(void)
{
	char str[30] = "C language is easy";      //������ ���� y ���� \0
	int i = 0;

	while (str[i] != 0)                       //0�� �ƴҶ�����
		i++;
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

	return 0;
}//���ڿ� ù��° C���� �ϳ��� ������ ���ٰ� ������ \0�� ������ ���� while�� �������� �� �������� i�� ��� 