//const ������
#include <stdio.h>
int main(void)
{
	char s[] = "Barking dohs seldom bite.";
	char t[] = "A bad workman blames his tools.";
	const char* p = s;
	char* const q = s;

	//p[3]='a';          //p�� ����Ű�� ���� ������ ������ �� ����
	p = t;               //p�� ���� ����
	q[3] = 'a';          //q�� ����Ű�� ���� ���� ���� ����
	//q=t;               //q�� ���� �Ұ���

	return 0;
}