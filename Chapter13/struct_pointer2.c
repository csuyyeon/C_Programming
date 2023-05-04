//포인터를 멤버로 가지는 구조체
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
	struct date* dob;      //dob: 구조체 포인터 변수
};//주소값을 저장할 수 있는 4바이트의 공간에 dob가 구조체 맨 뒤에 생기고, dob에는 주소값을 다른 구조체를 참조하게 됨

int main(void)
{
	struct date d = { 3,27,2000 };
	struct student s = { 20190636,"수연",4.5 };

	s.dob = &d;

	printf("학번:%d\n", s.number);
	printf("이름:%s\n", s.name);
	printf("생년월일:%d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}