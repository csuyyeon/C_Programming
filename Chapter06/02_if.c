//if���� ����Ͽ� ���밪�� ���ϴ� ���α׷�
#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &number);

	if (number > 0)                             //number�� 0���� ������ number�� ��ȣ�� ����
		number = -number;

	printf("���밪�� %d�Դϴ�.\n", number);

	return 0;
}