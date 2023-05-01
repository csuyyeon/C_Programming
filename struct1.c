#include <stdio.h>
#include <stdlib.h>
//구조체 선언
struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	//구조체 변수 선언
	struct student s;
	//구조체 멤버 참조, 구조체s에 .을 사용해서 구조체의 멤버 변수들에 접근
	s.number = 20190636; 
	strcpy(s.name, "최수연");    //name:배열의 이름으로 배열의 시작 주소 값을 가짐
	s.grade = 4.5;

	printf("학번:%d\n", s.number);
	printf("이름:%s\n", s.name);
	printf("학점:%f\n", s.grade);

	return 0;
}