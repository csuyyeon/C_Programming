//중첩 for문을 이요하여 *기호를 사각형 모양으로 출력
#include <stdio.h>

int main(void)
{
	for (int y = 0; y < 5; y++)               //변수 y를 0에서 4까지 증가시키면서 내부의 for루프를 실행
	{
		for (int x = 0; x < 10; x++)          //변수 x를 0에서 9까지 증가시키면서 printf() 메소드를 호출
			printf("*");

		printf("\n");                         //내부 반복문이 종료될 때마다 실행
	}

	return 0;
}