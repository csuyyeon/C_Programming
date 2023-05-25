/*나머지 연산자 프로그램*/
#include <stdio.h>
#define SEC_PER_MINUTE 60                                            //기호상수 정의

int main(void)
{
	int input, minute, second;

	printf("초를 입력하세요: ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;                                //초단위의 시간이 몇 분에 해당하는지 입력받은 초단위의 시간을 SEC_PER_MINUTE로 나눔
	second = input % SEC_PER_MINUTE;                                //입력받은 시간을 SEC_PER_MINUTE로 나누어서 나온 나머지가 초에 해당

	printf("%d초는 %d분 %초입니다.\n", input, minute, second);

	return 0;
}