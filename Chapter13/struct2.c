#include <stdio.h>
//����ü ����
struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	//����ü ���� ����
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	//����ü ����� �ּ� ����, �й��̳� �̸�, ������ �Է��� �� �ּҸ� �Ѱ���
	scanf("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%d", s.name);         //name�� �迭, �迭 ��ü�� �޸� �󿡼� �ּҸ� �ǹ��ϴ� ������ &������ ���X

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%d", &s.grade);

	printf("�й�:%d\n", s.number);
	printf("�̸�:%s\n", s.name);
	printf("����:%f\n", s.grade);

	return 0;
}