//��������: ������ �ȵ� ���ڵ� �߿��� �ּҰ��� �����Ͽ� �迭�� ù��° ��ҿ� ��ȯ
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };    //�� ������ ���������� ����
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;                               //least�� �ּҰ��� ���� �迭�� �ε���
		for (j = i + 1; j < SIZE; j++)           //�迭���� � ���� �ּҰ����� �𸣱� ������ ù��° ĭ�� �� ���� ã�� ���� i=0�� ���� �ܰ�
			if (list[j] < list[least])           //������ �ּҰ��� ���Ͽ� �� ���� ������ �߰ߵǸ� �� ������ ����ִ� �ε����� least�� ����
				least = j;

		temp = list[i];                          //list[i]�� list[least]�� ���� ��ȯ -> �ֽ��� ��� �ſ��� ������ ��� ������ �̵��� �� �׳� �ű�� ���� �ƴ϶� ���ο� ������ ���� �ű� �� �Ű��ش�
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0;i < SIZE; i++)
		printf("%d", list[i]);

	printf("\n");
	return 0;
}