//배열초기화 수정
#include <stdio.h>
int main(void)
{
	int grade[5];         //아무런 값을 넣어주지 않아 초기화X -> 의미없는 쓰레기 값
	int i;

	for (i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}//쓰레기 값이 출력, 초기값의 개수가 배열 요소의 개수보다 많은 경우 컴파일 오류
