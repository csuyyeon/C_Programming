//void ������: �����ϰ� �޸��� �ּҸ� ������ �ִ� ������, �ڷ����� ����
#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	void* vp;

	vp = a;
	vp = &a[2];
	//*vp=35;         ->����
	//vp++;           ->����

	*(int*)vp = 35;

	return 0;
}