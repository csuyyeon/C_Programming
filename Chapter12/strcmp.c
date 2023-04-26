#include <string.h>
#include <stdio.h>

int main(void)
{
	char s1[80];          //첫번째 단어를 저장할 문자배열
 	char s2[80];          //두번째 단어를 저장할 문자배열
	int result;

	printf("첫번째 단어를 입력하시오:");
	scanf("%s", s1);      //s1은 배열이름이라 그 자체가 주소를 의미함
	printf("두번째 단어를 입력하시오:");
	scanf("%s", s2);

	result = strcmp(s1, s2);      //문자들은 아스키코드로 숫자로 바뀌어 저장되기 때문에 배열의 원소들을 비교
	if (result < 0)
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	else if(result==0)
		printf("%s가 %s와 같습니다.\n", s1, s2);
	else
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
	
	return 0;
}