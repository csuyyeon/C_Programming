#include <stdio.h>
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

	printf("학번을 입력하시오: ");
	//구조체 멤버의 주소 전달, 학번이나 이름, 학점을 입력할 때 주소를 넘겨줌
	scanf("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf("%d", s.name);         //name이 배열, 배열 자체가 메모리 상에서 주소를 의미하는 것으로 &연산자 사용X

	printf("학점을 입력하시오(실수): ");
	scanf("%d", &s.grade);

	printf("학번:%d\n", s.number);
	printf("이름:%s\n", s.name);
	printf("학점:%f\n", s.grade);

	return 0;
}