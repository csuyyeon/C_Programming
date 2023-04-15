#include <stdio.h>
int main(void)
{
	char buffer[8];         //배열 buffer를 char형으로 선언
	double* pd;             //포인터 변수 pd 선언
	int* pi;                //포인터 변수 pi 선언

	pd = (double*)buffer;   //배열 buffer를 double형으로 변환
	*pd = 3.14;

	printf("%f\n", *pd);
	pi = (int*)buffer;      
	*pd = 123;
	*(pi+1) = 3.14;

	printf("%d %d\n", *pi, *(pi + 1));
	return 0;
}