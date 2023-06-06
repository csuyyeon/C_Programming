//while문을 이용한 구구단 출력
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;                                 //초기값이 0이 아닌 1, 구구단은 1부터 곱해야하기 때문

	printf("출력하고 싶은 단: ");              //사용자로부터 출력하고 싶은 구구단의 단수를 받아 변수 n에 저장
	scanf("%d", &n);

	while (i <= 9)                             //9보다 작거나 같을 때까지 반복
	{
		printf("%d*%d=%d\n", n, i, n * i);
		i++;
	}

	return 0;
}
