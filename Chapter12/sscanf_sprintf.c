//sscanf: ���ڿ��κ��� �����͸� �о�� �Լ�
//sprintf: ����ϴ� ��� ���� ������ ����, ��°��� ���ڿ��� �����ϴ� �Լ�
#include <stdio.h>
int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;
	
	sscanf(s1, "%d", &value);    //���ڿ��κ��� �Է��� ����, s1 ���ڿ��κ��� %d�� ���·� �о�� ���� value�� ����
	printf("%d\n", value);
	sprintf(s2, "%d", value);
	printf("%s\n", s2);          //�迭 s2�� sprintf�� ���� ������ �� ���

	return 0;
}