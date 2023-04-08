#include <stdio.h>
#define STUDENTS 5
int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}//for루프를 반복하면서 사용자로부터 학생들의 성적을 입력받음, scanf()함수 호출 시 성적을 입력받아 배열의 index에 저장
	 
	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];//i번째 학생의 성적인 score[i]가 sum에 더해짐
	average = sum / STUDENTS;
	printf("성적 평균=%d\n", average);

	return 0;
}
