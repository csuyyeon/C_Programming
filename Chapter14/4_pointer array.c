//�迭������: �迭�� ����Ű�� ������
#include <stdio.h>

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int(*pa)[5];                          //�迭 ������, �迭 a�� �ּҰ��� �־� ����, ��ȣ������ ���� ������ �迭, �迭 ������
	int i;

	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d\n", (*pa)[i]);

	return 0;
}