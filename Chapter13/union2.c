//ip�ּ� ����
#include <stdio.h>
//����ü ����
union ip_address {
	unsigned long laddr;
	unsigned char saddr[4];
};//addr �̸��� ���� ����ü�� �����߰� ������ ���� 0~255������ ���� ���� ������ �� �ִ� ������ �Ҵ�

int main(void)
{
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	return 0;
}//���ͳ��� ������ �� 192.168.0.1 �̷� ip�ּҸ� �ָ� 4���� ������ ���·� �Է��� ���� ���� ��Ʈ��ũ ���� ���� ���� ó���� �� ���ο����� �̷� ���°� �ƴ϶� ��ü�� ���� ���� ���·� ����ϸ鼭 �������� �۾��� ó��