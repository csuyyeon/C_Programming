//����ȯ ���� ���α׷�
#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;

	c = 10000;                               //������ȯ���� int->char, �Ϻ� ���� �߸��� ��
	i = 1.23456 + 10;                        //������ȯ���� double->int, �Ҽ��� ���ϰ� �����
	f = 10 + 20;                             //�ø���ȯ���� int->float, ������ �Ǽ��� ��

	printf("c=%d,i=%d,f=%f\n", c, i, f);

	return 0;
}