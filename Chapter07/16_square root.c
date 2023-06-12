//break문: 반복 루프를 벗어나기 위해 사용
#include <stdio.h>

int main(void)
{
	double v;

	while (1)   //1은 항상 참이므로 while(1)은 무한루프가 됨
	{
		printf("실수값을 입력하시오: ");
		scanf("lf", &v);

		if (v < 0.0)   //변수 v가 0.0보다 작으면 제곱근을 구할 수 없으므로 break문을 실행
			break;

		printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));   //sqrt()함수를 호출하여 제곱근을 계산, double형 실수를 받아 제곱근을 계산하는 라이브러리 함수
	}

	return 0;
}