//�����Ҵ�: ���α׷��� ����Ǵ� ���ȿ��� ����ؼ� ������ ���� ������ �Ҵ�
//�ڵ��Ҵ�: ����� ���۵Ǹ鼭 ������ ���� ������ �Ҵ�ǰ� ����� ����Ǹ� ���� ������ ȸ��
#include <stdio.h>

void sub() {
	static int scount = 0;              //���������� ����Ǿ�, sub()�Լ��� ����Ǿ �ڵ����� �Ҹ���� ����
	int acount = 0;                     //���������� ����Ǿ�, sub()�Լ��� ����Ǹ� �ڵ����� �Ҹ�
	printf("scount=%d\t", scount);
	printf("acount=%d\n", acount);
	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	return 0;
}