//배열포인터: 배열을 가리키는 포인터
#include <stdio.h>

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int(*pa)[5];                          //배열 포인터, 배열 a에 주소값을 넣어 연결, 괄호유무에 따라 포인터 배열, 배열 포인터
	int i;

	pa = &a;
	for (i = 0; i < 5; i++)
		printf("%d\n", (*pa)[i]);

	return 0;
}