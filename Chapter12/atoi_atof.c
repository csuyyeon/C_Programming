//���ڿ� ��ġ ��ȯ
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;

	i = atoi(s1);      //s1 ���� �迭�� �ִ� ���ڸ� ���ڷ� �ٲ��ֱ� ���� atoi�� ����ؼ� ���� 100���� �ٲ� ���� i�� �־���
	d = atof(s2);
	result = i + d;

	sprintf(buffer, "%f", result);
	printf("�������� %s�Դϴ�.\n", buffer);    //print�� ȭ�鿡 ����� ���ִ� �Լ�, ȭ�鿡 ��� �� ���� �ƽ�Ű�ڵ�� ��ȯ�ؼ� ���
	return 0;
}