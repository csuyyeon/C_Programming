//열거형: 변수가 가질 수 있는 값들을 미리 열거해놓은 자료형, 오류를 줄이고 가독성을 높이기 위해 필요
#include <stdio.h>
enum days{SUN,MON,TUE,WED,THE,FRI,SAT};                                          //enum days 열거형을 선언하고 기호상수와 같은 값들만 넣을 수 있음
char* days_name[] = {                                                            //days_name이라고 하는 배열의 포인터
	"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

int main(void)
{
	enum days d;                                                                 
	d = WED;                                                                     //WED라고 하는 값을 d라고 하는 변수에 넣어주면 숫자 3으로 바뀌어서 들어감, 변수 d는 enum days형 변수여서 그 안에는 sunday부터 saturday까지 값들만 들어감
	printf("%d번째 요일은 %s입니다.\n", d, days_name[d]);                        //days_name[0]은 주소 값, days_name[1]은 2차원 배열에서 monday가 가리키고 있는 M이라고 하는 문자가 있는 시작 주소를 가리키고 있는 것 
	return 0;
}

