//공용체: 여러개의 멤버변수가 있고 가장 큰 멤버변수의 자료형 만큼 할당되고 이를 공유
#include <stdio.h>
//공용체 선언, 아직 메모리에 할당된다거나 공용체 변수가 만들어지지 않음
union example {
	int i;
	char c;
};

int main(void)
{
	//공용체 변수 v선언, 이때 메모리에 공용체 생성, 5바이트가 아닌 4바이트 공간이 할당
	union example v;
	
	v.c = 'A';
	printf("v.x:%c v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.x:%c v.i:%i\n", v.c, v.i);

}
//공용체는 메모리를 아끼기 위해서 멤버변수들이 메모리 공간을 공유 -> 어느 한 순간에 하나의 멤버 변수만 쓸 수 있음