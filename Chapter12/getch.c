//문자 입출력 라이브러리 
#include <stdio.h>
#include <conio.h>

int main(void)
{
	int ch;
	while ((ch = _getch()) != 'q')  //버퍼를 사용하지 않음, 키보드로 문자를 입력하다가 q를 입력하면 프로그램 종료
		_putch(ch);
	return 0;
}//_getch()함수는 버퍼를 사용하지 않아 버퍼에 값을 저장했다가 출력하는 형태가 아닌 키보드로 입력한 값만 가지고 한 문자씩 처리