//�����÷ο�: ������ ��Ÿ�� �� �ִ� ������ �Ѵ� ���ڸ� �����Ϸ��� �� �� �߻�
#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	s_money = s_money + 1;                   //�����÷ο� �߻�
	printf("s_money=%d\n", s_money);
	 
	u_money = u_money + 1;                   //�����÷ο� �߻� 
	printf("u_money=%u\n", u_money);

	return 0;
}