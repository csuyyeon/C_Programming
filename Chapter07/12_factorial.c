//for���� �̿��� ���丮�� ���ϱ�
#include <stdio.h>

int main(void)
{
	long fact = 1;                          //���丮�� ���� Ŀ�� �� �����Ƿ� long������ ����, �ʱⰪ�� �ݵ�� 1
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);                        //����ڷκ��� �Է� ���� ������ ���� n�� ����

	for (int i = 1; i <= n; i++)            //for������ ����Ͽ� fact�� i�� ���� ���� ������� �ٽ� fact�� ����
		fact = fact * i;

	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}