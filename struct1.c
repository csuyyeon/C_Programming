#include <stdio.h>
#include <stdlib.h>
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
	//����ü ��� ����, ����üs�� .�� ����ؼ� ����ü�� ��� �����鿡 ����
	s.number = 20190636; 
	strcpy(s.name, "�ּ���");    //name:�迭�� �̸����� �迭�� ���� �ּ� ���� ����
	s.grade = 4.5;

	printf("�й�:%d\n", s.number);
	printf("�̸�:%s\n", s.name);
	printf("����:%f\n", s.grade);

	return 0;
}