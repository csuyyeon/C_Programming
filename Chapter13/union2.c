//ip주소 예제
#include <stdio.h>
//공용체 선언
union ip_address {
	unsigned long laddr;
	unsigned char saddr[4];
};//addr 이름을 갖는 공용체를 선언했고 정수형 값과 0~255사이의 정수 값을 저장할 수 있는 공간을 할당

int main(void)
{
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	return 0;
}//인터넷을 설정할 때 192.168.0.1 이런 ip주소를 주면 4개의 문자의 형태로 입력을 받은 다음 네트워크 관련 여러 가지 처리할 때 내부에서는 이런 형태가 아니라 전체의 값을 정수 형태로 취급하면서 여러가지 작업을 처리