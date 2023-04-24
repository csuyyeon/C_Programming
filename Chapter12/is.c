//문자 처리 라이브러리 함수
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getch() != 'z'))
	{
		printf("------------------------------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c));             //숫자인지 검사
		printf("isalpha(%c) = %d\n", c, isalpha(c));             //알파벳인지 검사
		printf("islower(%c) = %d\n", c, islower(c));             //소문자인지 검사
		printf("ispunct(%c) = %d\n", c, ispunct(c));             //구두점 문자인지 검사
		printf("ixsdigit(%c) = %d\n", c, isxdigit(c));           //16진수인지 검사
		printf("isprint(%c) = %d\n", c, isprint(c));             //출력가능한지 검사
		printf("------------------------------------\n\n");
	}
	return 0;
}