//while���� �̿��� �ִ� ����� ���ϱ�
#include <stdio.h>

int main(void)
{
	int x, y, r;

	printf("�� ���� ������ �Է��Ͻÿ�(ū��,������): ");
	scanf("%d%d", &x, &y);

	while (y != 0)    //����ڷκ��� �������� �ԷµǾ� x�� y�� ����� ��, �ִ� ������� ����ϴ� while ������ ��
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ������� %d�Դϴ�.\n", x);

	return 0;
}