//����Ž��: �迭�� ���Ҹ� ������� �ϳ��� ������ Ž��Ű�� ���Ͽ� ���ϴ� ���� ã�� ���
//Ž��Ű: ã���� �ϴ� ��
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)                 //for������ �̿��Ͽ� list[i]�� key�� ���ϴ� ������ �迭�� ũ�⸸ŭ �ݺ�
		if (list[i] == key)                    //list[i]�� key�� ������ Ž���� ����, Ű���� �߰ߵ� �迭�� �ε��� ���
			printf("Ž�� ���� �ε���=%d\n", i);
	printf("Ž�� ����\n");
	return 0;
}