//���� �� ���ϱ�
#include <stdio.h>
//���丮�� ���� �̿��� ���հ��� ���
int combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}
//����ڷκ��� ���� �Է¹޾� ��ȯ
int get_integer(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	return n;
}
//���丮�� ���� ��ȯ
int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)       //���丮���� �ݺ������� ����Ͽ� 1���� n������ ���� ���� result�� ���Ѵ�. �ʱⰪ�� �ݵ�� 1 
		result *= i;

	return result;
}

int main(void)
{
	int a, b;

	a = get_integer();             //get_integer()�� 2�� ȣ���Ͽ� ����ڷκ��� ������ �Է¹���
	b = get_integer();

	printf("C(%d,%d)=%d\n", a, b, combination(a, b));  

	return 0;
}