#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];  //구조체 배열인 list를 만들어서 학생 여러명에 대한 정보를 저장하기 위해 구조체 배열의 형태로 정의해 각각의 원소에 넣어줌
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름:%s, 학점:%f\n", list[i].number, list[i].name, list[i].grade);

	return 0;
}