//������ �迭: �����͸� ��Ƽ� �迭�� ���� ��
//���ڿ� �迭
#include <stdio.h>

int main(void)
{
	int i, n;
	char* fruits[] = {                          //�ؽ�Ʈ ���׸�Ʈ�� ����
		"apple",                  
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits) / sizeof(fruits[0]);     //fruits���� �� ���� �ּҰ� �� �� �ִ� �������� �����Ǿ� �ִ��� ��ü �迭�� ���� ���
	                                           
	for (i = 0; i < n; i++)
		printf("%s\n", fruits[i]);

	return 0;
}//fruits �̸��� ���� �迭�� �ʱ�ȭ �ϸ鼭 �� 4���� ������ ��������µ� �� �������� ������ �迭�� ���� �ּ� ���� ��