#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &number);

	if (number > 0)                                //number�� 0���� ũ�� printf ������ ����
		printf("����Դϴ�\n");

	printf("�Էµ� ���� %d�Դϴ�.\n", number);     //if���� ����� �Ŀ� �׻� ����
	return 0;
}