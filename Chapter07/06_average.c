//while���� �̿��� ���� ��� ���ϱ�
#include <stdio.h>

int main(void)
{
	int grade, n;
	double sum, average;
	
	//���� �ʱ�ȭ
	n = 0;
	sum = 0;
	grade = 0;

	printf("�����϶�� ������ �Է��ϼ���\n");

	//������ �Է¹޾� �հ踦 ���ϰ� �л� ���� ī��Ʈ
	while (grade >= 0)          //grade�� 0�̻��̸� �ݺ�
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;          
	n--;

	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}