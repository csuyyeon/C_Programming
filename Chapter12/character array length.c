//문자열 길이 계산
#include <stdio.h>

int main(void)
{
	char str[30] = "C language is easy";      //마지막 문자 y 다음 \0
	int i = 0;

	while (str[i] != 0)                       //0이 아닐때까지
		i++;
	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);

	return 0;
}//문자열 첫번째 C부터 하나씩 개수를 세다가 마지막 \0을 만나는 순간 while을 빠져나와 몇 개인지를 i로 출력 