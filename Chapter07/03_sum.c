#include <stdio.h>

int main(void)
{
	int i, n, sum;                                              //��������

	printf("������ �Է��Ͻÿ�: ");                              //�Է� �ȳ� �޽��� ���
	scanf("%d", &n);                                            //������ �Է�

	i = 1;                                                      //���� �ʱ�ȭ
	sum = 0;                                                    //���� �ʱ�ȭ

	while (i <= n)                                              //i�� 1�� ������Ű�鼭 sum�� ����
	{
		sum += i;
		i++;
	}

	printf("i��Ÿ %d������ ���� %d�Դϴ�.\n", n, sum);
	return 0;
}