//sscanf: 문자열로부터 데이터를 읽어내는 함수
//sprintf: 출력하는 결과 값을 변수에 저장, 출력값을 문자열에 저장하는 함수
#include <stdio.h>
int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;
	
	sscanf(s1, "%d", &value);    //문자열로부터 입력을 받음, s1 문자열로부터 %d의 형태로 읽어와 변수 value에 저장
	printf("%d\n", value);
	sprintf(s2, "%d", value);
	printf("%s\n", s2);          //배열 s2는 sprintf를 통해 정수형 값 출력

	return 0;
}