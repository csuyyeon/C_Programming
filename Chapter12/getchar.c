//���� ����� ���̺귯�� 
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)    //End Of File�� ��Ÿ���� ����, ������
		putchar(ch);
	return 0;
}
//getchar(): � ���ڸ� �Է� ���� ���� ����Ű�� ������ �� ���ڰ� Ű���� ���ۿ� �� � ������ ����Ǵ� �Է� �޴� �Լ�
//putchar(): ch�ȿ� �ִ� ������ �� ���ھ� ������ִ� �Լ�