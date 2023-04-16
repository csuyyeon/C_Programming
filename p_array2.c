//포인터와배열-2
#include <stdio.h>
int main(void)
{
	int a[] = { 10,20,30,40,50 };

	printf("a=%u\n", a);              //배열의 시작주소
	printf("a+1=%u\n", a+1);          //4byte 만큼 띄어준 공간 출력
	printf("*a=%d\n", *a);            //배열의 첫번째 원소 출력
	printf("*(a+1)=%d\n", *(a+1));    //배열의 두번째 원소 출력

	return 0;
}