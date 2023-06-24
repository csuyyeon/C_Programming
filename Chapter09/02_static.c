//정적할당: 프로그램이 실행되는 동안에는 계속해서 변수에 저장 공간이 할당
//자동할당: 블록이 시작되면서 변수에 저장 공간이 할당되고 블록이 종료되면 저장 공간이 회수
#include <stdio.h>

void sub() {
	static int scount = 0;              //정적변수로 선언되어, sub()함수가 종료되어도 자동으로 소멸되지 않음
	int acount = 0;                     //지역변수로 선언되어, sub()함수가 종료되면 자동으로 소멸
	printf("scount=%d\t", scount);
	printf("acount=%d\n", acount);
	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	return 0;
}