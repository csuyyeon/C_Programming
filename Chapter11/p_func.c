//배열 매개 변수
#include <stdio.h>
void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1,2,3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);                               //a: 배열의 이름, 시작주소값을 sub에 넣어줌
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return 0;
}
void sub(int b[], int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}
//함수는 배열을 넘겨주거나 받을 때 배열의 주소를 받아서 원본을 받는 개념, 배열은 함수가 호출될 때 주소를 전달해서 원본을 전달하는 개념