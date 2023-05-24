//오버플로우: 변수가 나타낼 수 있는 범위를 넘는 숫자를 저장하려고 할 때 발생
#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;
	unsigned short u_money = USHRT_MAX;

	s_money = s_money + 1;                   //오버플로우 발생
	printf("s_money=%d\n", s_money);
	 
	u_money = u_money + 1;                   //오버플로우 발생 
	printf("u_money=%u\n", u_money);

	return 0;
}
