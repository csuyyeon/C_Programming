//������ ������� ���α׷�
#include <stdio.h>

int main(void)
{
	char op;                                            //char�� ���� op ����, �����ڸ� ��Ÿ���� ��ȣ�� ����
	int x, y, result;                                   //int�� ���� x�� y����, x�� y�� �ǿ����ڰ� ���� 

	printf("������ �Է��Ͻÿ�(��:2+5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')                                      //�������� if���� ����� �����ڸ� �з�
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("�������� �ʴ� �������Դϴ�.\n");

	
	return 0;
}