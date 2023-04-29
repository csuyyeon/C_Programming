//문자열 수치 변환
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;

	i = atoi(s1);      //s1 문자 배열에 있는 분자를 숫자로 바꿔주기 위해 atoi를 사용해서 숫자 100으로 바꾼 다음 i에 넣어줌
	d = atof(s2);
	result = i + d;

	sprintf(buffer, "%f", result);
	printf("연산결과는 %s입니다.\n", buffer);    //print는 화면에 출력을 해주는 함수, 화면에 출력 할 때는 아스키코드로 변환해서 출력
	return 0;
}