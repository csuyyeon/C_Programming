//포인터를 통한 구조체 참조
#include <stdio.h>
//구조체 선언
struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	//구조체 변수 선언, 이 구조체에 대한 값을 넣기 위한 메모리 공간 22바이트가 어딘가에 할당이 되고 그 안에 값들이 들어감
	struct student s = { 200070001,"홍길동",4.3 };
	struct student* p;         //구조체 포인터 변수 p선언, p는 메모리 어딘가에 4바이트의 공간을 갖고 존재하게 됨

	p = &s;

	printf("학번=%d 이름=%s 키=%f\n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 키=%f\n", (*p).number,(*p).name,(*p).grade);
	printf("학번=%d 이름=%s 키=%f\n", p->number, p->name, p->grade);

	return 0;
}