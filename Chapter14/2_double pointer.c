#include <stdio.h>
void set_pointer(char** q);
char* proverb = "All that glisters is not gold.";    //������ �����̹Ƿ� �ּҰ����� ����, �ؽ�Ʈ ���׸�Ʈ�� ����Ǿ� �� �����ּ� ���� proverb������

int main(void)
{
	char* p = "zzz";                                 //p���� ������ �����̹Ƿ� zzz���ڿ��� ���� ���� ���� �ƴ϶� �ؽ�Ʈ ���׸�Ʈ�� ����� �ּҰ��� p�� ����
	set_pointer(&p);                                 //������ p�� ���� �Լ����� �����Ϸ��� �ּҸ� ������ ��
	printf("%s\n", p);
	return 0;
}

void set_pointer(char** q)
{
	*q = proverb;
}