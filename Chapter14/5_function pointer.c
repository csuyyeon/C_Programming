//함수포인터: 함수를 가리키는 포인터
//함수를 호출한다 = 함수를 호출한다 = 이 요청이 들어오면 함수가 메모리에 올라온다 -> 함수도 실행이 시작되는 주소를 가지고 있음
#include <stdio.h>
//함수 원형 정의
int add(int, int);                       //add함수와 sub함수를 정의하고 있는데 자료형만 있고 변수 이름이 없음 -> 함수는 원형을 정의할 때는 변수의 이름을 써주지 않아도 됨
int sub(int, int);

int main(void)
{
	int result;
	int (*pf)(int, int);                 //함수 포인터 선언

	pf = add;                            //함수 포인터에 함수 add()의 주소 대입 -> pf가 add() 함수 처럼 동작
	result = pf(10, 20);                 //함수 포인터를 통한 함수 add() 호출
	printf("10+20은 %d\n", result);

	pf = sub;                            //함수 포인터에 함수 sub()의 주소 대입 -> pf가 sub() 함수 처럼 동작
	result = pf(10, 20);                 //함수 포인터를 통한 함수 sub() 호출
	printf("10-20은 %d\n", result);      

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sun(int x, int y)
{
	return x - y;
}
