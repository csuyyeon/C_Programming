#include <stdio.h>
int main(void)
{
	int i = 3000;               //�޸��� 4byte ������ ���� i�� ����ǰ� 3000 ���� �־���
	int* p = &i;                //������ ���� ����, ������ ������ ����

	printf("&i=%u\n", &i);      //������ �ּ� ���, ������ ����p ���� �� ����i�� &�� ����Ͽ� �޸� �����ּ� ���� ������ ���� p�� �־���  
	printf("i=%d\n", i);        //������ �� ��� 
	printf("*p=%d\n", *p);      //�����͸� ���� ���� ���� �� ���
	printf("p=%u\n", p);        //�������� �� ���

	return 0;
}