//�����͸� ����� ������ ����ü
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double grade;
	struct date* dob;      //dob: ����ü ������ ����
};//�ּҰ��� ������ �� �ִ� 4����Ʈ�� ������ dob�� ����ü �� �ڿ� �����, dob���� �ּҰ��� �ٸ� ����ü�� �����ϰ� ��

int main(void)
{
	struct date d = { 3,27,2000 };
	struct student s = { 20190636,"����",4.5 };

	s.dob = &d;

	printf("�й�:%d\n", s.number);
	printf("�̸�:%s\n", s.name);
	printf("�������:%d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}