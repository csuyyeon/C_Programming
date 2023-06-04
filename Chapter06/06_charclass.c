//문자 분류 프로그램
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자를 입력하시오: ");
	scanf("%c", &ch);                               //사용자로부터 하나의 문자를 입력받아 변수 ch에 저장

	if (ch >= 'A' && ch <= 'Z')                     //ch가 A보다 크거나 같고 Z보다 작거나 같으면 대문자라고 출력
		printf("%c는 대문자입니다.\n", ch);
	else if (ch >= 'a' && ch <= 'z')                //ch가 a보다 작거나 같으면 소문자라고 출력  
		printf("%c는 소문자입니다.\n", ch);
	else if (ch >= '0' && ch <= '9')                //ch가 0보다 크거나 같고 9보다 작거나 같으면 숫자라고 출력
		printf("%c는 숫자입니다.\n", ch);
	else                                            //앞의 조건을 모두 만족하지 않으면 기타 문자라고 출력
		printf("%c는 기타문자입니다.\n", ch);

	return 0;
}