#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];  //����ü �迭�� list�� ���� �л� ������ ���� ������ �����ϱ� ���� ����ü �迭�� ���·� ������ ������ ���ҿ� �־���
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("�й�: %d, �̸�:%s, ����:%f\n", list[i].number, list[i].name, list[i].grade);

	return 0;
}