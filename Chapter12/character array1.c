#include <stdio.h>

int main(void)
{
	int i;
	char str[4];                 //str배열이름=메모리 시작주소
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	//문자열에 있는 내용을 출력
	i = 0;
	while (str[i] != '\0') {     //str[i] i의 처음 값은 0이고 하나씩 증가해 총4번 반복
		printf("%c", str[i]);
		i++;
	}
	return 0;
}//문자배열에 들어있는 문자들을 하나씩 출력, 문자 배열에 들어있는 문자들을 하나씩 화면에 출력하다가 null문자가 나오면 반복을 종료