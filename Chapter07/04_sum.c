#include <stdio.h>

int main(void)
{
	int i, n, sum;                                              //��������

	printf("������ �Է��Ͻÿ�: ");                              //�Է� �ȳ� �޽��� ���
	scanf("%d", &n);                                            //������ �Է�

	i = 0;                                                      //���� �ʱ�ȭ
	sum = 0;                                                    //���� �ʱ�ȭ

	while (i <= n)                                              //i���� n������ ¦������ ���� ���ϱ� ���� i�� 2�� ����
	{
		sum += i;
		i = i + 2;
	}

	printf("i��Ÿ %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}