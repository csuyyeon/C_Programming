//���� ó�� ���̺귯�� �Լ�
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)     
	{
		if (islpwer(c))            //�ҹ��ڶ�� ���� �Ǵ� �Լ�, �ҹ������� �˻�
			c = toupper(c);        //�빮�ڷ� ��ȯ
		putchar(c);
	}
	return 0;
}