//���迬����: �� ���� �ǿ����ڸ� ���ϴµ� ���
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &x, &y);

	printf("x==y�� �����: %d\n", x == y);
	printf("x!=y�� �����: %d\n", x != y);
	printf("x>y�� �����: %d\n", x > y);
	printf("x<y�� �����: %d\n", x < y);
	printf("x>=y�� �����: %d\n", x >= y);
	printf("x<=y�� �����: %d\n", x <= y);    //���迬������ ����� 1�Ǵ� 0

	return 0;
}