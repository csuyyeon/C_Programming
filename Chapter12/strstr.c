#include <string.h>
#include <stdio.h>
int main(void)
{
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char* p;
	int loc;
	p = strstr(s, sub);       //문자열 s에서 sub문자열이 있는지 없는지 확인해 동일한 문자열이 발견되면 그 문자열의 시작 주소 값을 p에게 넘겨줌
	loc = (int)(p - s);
	if (p != NULL)
		printf("첫번째 %s가 %d에서 발견되었음\n", sub, loc);
	else
		printf("%s가 발견되지 않았음\n", sub);
}
