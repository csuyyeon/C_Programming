//���� �з� ���α׷�
#include <stdio.h>

int main(void)
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &ch);                               //����ڷκ��� �ϳ��� ���ڸ� �Է¹޾� ���� ch�� ����

	if (ch >= 'A' && ch <= 'Z')                     //ch�� A���� ũ�ų� ���� Z���� �۰ų� ������ �빮�ڶ�� ���
		printf("%c�� �빮���Դϴ�.\n", ch);
	else if (ch >= 'a' && ch <= 'z')                //ch�� a���� �۰ų� ������ �ҹ��ڶ�� ���  
		printf("%c�� �ҹ����Դϴ�.\n", ch);
	else if (ch >= '0' && ch <= '9')                //ch�� 0���� ũ�ų� ���� 9���� �۰ų� ������ ���ڶ�� ���
		printf("%c�� �����Դϴ�.\n", ch);
	else                                            //���� ������ ��� �������� ������ ��Ÿ ���ڶ�� ���
		printf("%c�� ��Ÿ�����Դϴ�.\n", ch);

	return 0;
}