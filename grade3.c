#include <stdio.h>
#include <stdlib.h>
#define SIZE 5          //��ȣ��� SIZE, �л����� ���� �����Ϸ��� �� ��ȣ����� ���Ǹ� ����=����

int main(void)
{
	int i;
	int grade[SIZE];
	printf("5���� ������ �Է��Ͻÿ�\n");

	for (i = 0; i < SIZE; i++)
		scanf("%d", &grade[i]); //&:������ ������ ����� ��ġ 
	
	for (i = 0; i < SIZE; i++)
		pirntf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}