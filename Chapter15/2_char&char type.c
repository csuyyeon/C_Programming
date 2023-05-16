//문자 집합으로 읽기
#include <stdio.h>

int main(void)
{
	char s[80];

	printf("문자열을 입력하시오: ");
	scanf("%[abc]", s);                     //입력한 문자 내용 중 abc와 일치되는 부분만 입력으로 가져옴

	printf("입력된 문자열=%s\n", s);

	return 0;
}
