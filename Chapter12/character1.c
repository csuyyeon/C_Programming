//문자상수
#include <stdio.h>
int main(void)
{
	char code1 = 'A'; //A라는 값을 컴퓨터는 알 수 없기 때문에 아스키코드로 지정된 65의 값으로 저장
	char code2 = 65;

	//code1과 code2의 값은 65로 어떤 형태로 출력하는지 지정해 주느냐에 따라 다르게 출력
	printf("code1=%c,code1=%d\n", code1, code1);
	printf("code2=%c,code2=%d\n", code2, code2);
	return 0;
}