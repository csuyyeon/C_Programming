//while���� �̿��� ���丮�� ���ϱ�
#include <stdio.h>

int main(void)
{
	long fact = 1;                          //���丮�� ���� Ŀ�� �� �����Ƿ� long������ ����, �ʱⰪ�� �ݵ�� 1
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);                        //����ڷκ��� �Է� ���� ������ ���� n�� ����

	i = 0;
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}

	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}