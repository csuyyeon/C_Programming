#include <stdio.h>
int main(void)
{
	int grade[5];         //�ƹ��� ���� �־����� �ʾ� �ʱ�ȭX -> �ǹ̾��� ������ ��
	int i;

	for (i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}//������ ���� ���, �ʱⰪ�� ������ �迭 ����� �������� ���� ��� ������ ����
