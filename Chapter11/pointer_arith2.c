#include <stdio.h>
int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i=%d,pi=%p\n", i, pi);   
	(*pi)++;                          //pi가 가리키는 위치의 값 증가=i의 값 증가 10->11
	printf("i=%d,pi=%p\n", i, pi);

	printf("i=%d,pi=%p\n", i, pi);
	(*pi)++;                         //pi가 가리키는 위치에서 값을 가져온 후에 pi증가=4byte 증가
	printf("i=%d,pi=%p\n", i, pi);

	return 0;
}