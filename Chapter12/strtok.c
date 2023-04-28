#include <string.h>
#include <stdio.h>
//전역변수: main 함수 뿐만 아니라 다른 모든 곳에서도 이 변수에 접근할 수 있음
char s[] = "Man is immortal, because he has a soul";
char seps[] = ",\t\n";                   
char* token;

int main(void)
{
	token = strtok(s, seps);                  //문자열을 전달하고 다음 토큰을 얻는다.
	while (token != NULL)
	{
		printf("토큰: %s\n", token);

		token = strtok(NULL, seps);           //다음 토큰을 얻는다.
	}
}
//토큰이 더 이상 얻어지지 않는 경우까지 계속 반복하다 보면 구분자를 기준으로 잘린 문장들이 토큰에 남아있게 되고 이 토큰에 남아 있는 값에 대해 다시 strtok를 하게 되면 그 부분에 대해 계쏙 그 작업을 진행하면서 문자열을 잘라줌