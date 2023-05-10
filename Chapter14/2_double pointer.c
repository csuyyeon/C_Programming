#include <stdio.h>
void set_pointer(char** q);
char* proverb = "All that glisters is not gold.";    //포인터 변수이므로 주소값만을 갖음, 텍스트 세그먼트에 저장되어 이 시작주소 값이 proverb에대입

int main(void)
{
	char* p = "zzz";                                 //p또한 포인터 변수이므로 zzz문자열이 직접 들어가는 것이 아니라 텍스트 세그먼트에 저장된 주소값이 p에 대입
	set_pointer(&p);                                 //포인터 p의 값을 함수에서 변경하려면 주소를 보내야 함
	printf("%s\n", p);
	return 0;
}

void set_pointer(char** q)
{
	*q = proverb;
}