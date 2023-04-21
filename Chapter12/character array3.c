//배열 복사
#include <stdio.h>
int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원본 문자열=%s\n", src);
	for (i = 0; src[i] != NULL; i++)                           //NULL문자가 나올 때까지 반복하면서 각각의 문자들을 dst배열로 복사
		dst[i] = src[i];                                       //배열의 첫번째 원소는 T, T와 NULL이 같은지를 비교 p까지, 마지막 \0을 만나면 반복문을 빠져나옴
	dst[i] = NULL;                                             //src배열의 마지막 \0을 만날 때까지 i값을 증가시키면서 src배열에 있는 값을 dst배열에 넣어줌 = 배열 복사
	printf("복사된 문자열=%s\n", dst);
	return 0;
}