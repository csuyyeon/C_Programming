/*���������*/
#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("�ΰ��� ������ �Է��ϼ���: ");
	scanf("%d %d", &x, &y);                   //���������� %d�� �� �� �Ἥ �ΰ��� ������ ȣ���Ͽ� �ѹ��� �Է¹���

	result = x + y;                           //���� ����, ���� ���� ����� result�� ����
	printf("%d+%d=%d\n", x, y, result);

	result = x - y;                           //���� ����
	printf("%d-%d=%d\n", x, y, result);

	result = x * y;                           //���� ����
	printf("%d*%d=%d\n", x, y, result);

	result = x / y;                           //������ ����, ������ ������ ������ ��� ������� �Ҽ��� ���ϴ� ������
	printf("%d/%d=%d\n", x, y, result);

	result = x % y;                           //������ ����
	printf("%d%%%d=%d\n", x, y, result);

	return 0;

}