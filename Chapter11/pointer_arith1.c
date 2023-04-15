//포인터 증가 연산
#include <stdio.h>
int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;    //(   ): 형변환연산자, 형변환연사자를 사용하면 해당 자료형으로 변환
	pi = (int*)10000;
	pd = (double*)10000;
	printf("증가 전 pc=%d, pi=%d, pd=%d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++; 
	printf("증가 후 pc=%d, pi=%d, pd=%d\n", pc, pi, pd);
	
	return 0;
}//포인터 변수에서 1증가시킨다는 것은 그 포인터 변수가 가리키고 있는 자료형의 크기 만큼 증가시키는 것