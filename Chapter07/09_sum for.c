//for���� �̿��� ���� ��
#include <stdio.h>

int main(void)
{
	int sum;     //�������� ���� sum�� ����

	sum = 0;
	for (int i = 1; i <= 10; i++)      //i�� 1���� 10���� ����, 11�� �ݺ��Ǹ� �ݺ� ���� ����, �ݺ� ���� �ȿ��� sum�� i�� ���� ������
		sum += i;

	printf("1���� 10������ ������ �� = %d\n", sum);     //for���� ������ ����, sum�� ���� ���

	return 0;
}