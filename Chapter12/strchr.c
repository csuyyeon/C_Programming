#include <string.h>
#include <stdio.h>
int main(void)
{
	char s[] = "language";                               //배열s 문자 배열, 텍스트 세그먼트에 만들어져 있고 이 값이 s라고 하는 배열에 복사
	char c = 'g';                                        //변수 c에 문자 상수 g로 초기화
	char* p;                                             //포인터 변수 p 선언
	int loc;                                             //정수형 변수 loc 선언

	p = strchr(s, c);                                    //strchr: 찾은 위치의 주소값을 넣어줌 s: 배열의 이름=주소값
	loc = (int)(p - s);                                  //s는 주소, p는 찾아 줄 주소
	if (p != NULL) 
		printf("첫번째 %c가 %d에서 발견되었음\n", c, loc);
	else
		pirntf("%c가 발견되지 않았음\n", c);
	return 0;
}