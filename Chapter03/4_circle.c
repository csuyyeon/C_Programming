/*원의 면적 구하는 프로그램*/
#include <stdio.h>

int main(void)
{
	float radius;                             //원의 반지름
	float area;                               //면적

	printf("반지름을 입력하시오: ");          //사용자로부터 원의 반지름 값을 실수형식으로 받아 변수 radius에 저장
	scanf("%f", &radius);
	area = 3.14 * radius * radius;            //원의 면적 계산, C에서는 거듭 제곱을 구하는 연산자가 없기 때문에 곱셈을 두번해줌
	printf("원의 면적:%f\n", area);

	return 0;
}