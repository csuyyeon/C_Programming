//문자 처리 라이브러리 함수
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)     
	{
		if (islpwer(c))            //소문자라면 참이 되는 함수, 소문자인지 검사
			c = toupper(c);        //대문자로 변환
		putchar(c);
	}
	return 0;
}