/*월수령액을 계산하는 프로그램*/
#include <stdio.h>

int main(void)
{
	int ysalary;                                     //연봉
	int msalary;                                     //월수령액

	printf("연봉을 입력하세요(단위:만원): ");        //사용자로부터 숫자(연봉)을 입력받아 ysalary에 저장
	scanf("%d", &ysalary);

	msalary = ysalary / 12;                          //월수령액=연봉/12
	
	printf("월수령액(단위:만원): %d\n",msalary);
	return 0;
}