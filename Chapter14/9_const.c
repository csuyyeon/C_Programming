//const 포인터
#include <stdio.h>
int main(void)
{
	char s[] = "Barking dohs seldom bite.";
	char t[] = "A bad workman blames his tools.";
	const char* p = s;
	char* const q = s;

	//p[3]='a';          //p가 가리키는 곳의 내용을 변경할 수 없음
	p = t;               //p는 변경 가능
	q[3] = 'a';          //q가 가리키는 곳의 내용 변경 가능
	//q=t;               //q는 변경 불가능

	return 0;
}