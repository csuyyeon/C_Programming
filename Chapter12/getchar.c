//문자 입출력 라이브러리 
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)    //End Of File을 나타내는 문자, 정수형
		putchar(ch);
	return 0;
}
//getchar(): 어떤 문자를 입력 받은 다음 엔터키를 누르면 그 문자가 키보드 버퍼에 들어가 어떤 변수에 저장되는 입력 받는 함수
//putchar(): ch안에 있는 내용을 한 문자씩 출력해주는 함수