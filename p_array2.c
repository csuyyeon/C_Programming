//�����Ϳ͹迭-2
#include <stdio.h>
int main(void)
{
	int a[] = { 10,20,30,40,50 };

	printf("a=%u\n", a);              //�迭�� �����ּ�
	printf("a+1=%u\n", a+1);          //4byte ��ŭ ����� ���� ���
	printf("*a=%d\n", *a);            //�迭�� ù��° ���� ���
	printf("*(a+1)=%d\n", *(a+1));    //�迭�� �ι�° ���� ���

	return 0;
}