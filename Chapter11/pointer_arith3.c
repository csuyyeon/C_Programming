#include <stdio.h>
int main(void)
{
	char buffer[8];         //�迭 buffer�� char������ ����
	double* pd;             //������ ���� pd ����
	int* pi;                //������ ���� pi ����

	pd = (double*)buffer;   //�迭 buffer�� double������ ��ȯ
	*pd = 3.14;

	printf("%f\n", *pd);
	pi = (int*)buffer;      
	*pd = 123;
	*(pi+1) = 3.14;

	printf("%d %d\n", *pi, *(pi + 1));
	return 0;
}