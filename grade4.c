#include <stdio.h>
#define STUDENTS 5
int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &grade[i]);
	}//for������ �ݺ��ϸ鼭 ����ڷκ��� �л����� ������ �Է¹���, scanf()�Լ� ȣ�� �� ������ �Է¹޾� �迭�� index�� ����
	 
	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];//i��° �л��� ������ score[i]�� sum�� ������
	average = sum / STUDENTS;
	printf("���� ���=%d\n", average);

	return 0;
}