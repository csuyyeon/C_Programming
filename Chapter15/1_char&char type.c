//문자와 문자열 입력
#include <stdio.h>

int main(void)
{
	char c;
	char s[80], t[80];

	printf("스페이스로 분리된 문자열을 입력하시오: ");
	scanf("%s%c%s", s, &c, t);

	printf("입력된 첫번째 문자열=%s\n", s);
	printf("입력된 문자=%c\n", c);
	printf("입력된 두번째 문자열=%s\n", t);

	return 0;
}
//문자열 Hello World를 입력하면 이 문자열이 키보드 버퍼에 한꺼번에 들어감, 키보드 버퍼에서 하나씩 처리하면서 변수에 넣어줌
