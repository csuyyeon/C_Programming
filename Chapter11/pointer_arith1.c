//������ ���� ����
#include <stdio.h>
int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;    //(   ): ����ȯ������, ����ȯ�����ڸ� ����ϸ� �ش� �ڷ������� ��ȯ
	pi = (int*)10000;
	pd = (double*)10000;
	printf("���� �� pc=%d, pi=%d, pd=%d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++; 
	printf("���� �� pc=%d, pi=%d, pd=%d\n", pc, pi, pd);
	
	return 0;
}//������ �������� 1������Ų�ٴ� ���� �� ������ ������ ����Ű�� �ִ� �ڷ����� ũ�� ��ŭ ������Ű�� ��