#include <stdio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i=%d\n", i);

	*p = 20;                      //p�� ����� i�� ���� ���ο� ������ ����->�����͸� ���Ͽ� ������ ���� ����
	printf("i=%d\n", i);
	return 0;
}//������ ������ ����� ���� �Ҵ��ϸ鼭 �����ų �� �ִ�