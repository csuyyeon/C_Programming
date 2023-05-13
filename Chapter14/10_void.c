//void 포인터: 순수하게 메모리의 주소만 가지고 있는 포인터, 자료형이 없다
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	void* vp;

	vp = a;
	vp = &a[2];
	//*vp=35;         ->오류
	//vp++;           ->오류

	*(int*)vp = 35;

	return 0;
}