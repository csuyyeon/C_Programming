//while문을 이용한 성적 평균 구하기
#include <stdio.h>

int main(void)
{
	int grade, n;
	double sum, average;
	
	//변수 초기화
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료하라면 음수를 입력하세요\n");

	//성적을 입력받아 합계를 구하고 학생 수를 카운트
	while (grade >= 0)          //grade가 0이상이면 반복
	{
		printf("성적을 입력하세요: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;          
	n--;

	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}