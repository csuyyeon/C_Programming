//이중포인터: 포인터를 가리키는 포인터
#include <stdio.h>

int main(void)
{
	int i = 100;
	int* p = &i;                                 //포인터변수 p에 i의 주소값을 대입하여 연결
	int** q = &p;                                //포인터 변수 q를 p와 연결

	*p = 200;                                    //i의 값이 200으로 바뀜
	printf("i=&d *p=%d **q=%d\n", i, *p, **q);

	**q = 300;                                   //i의 값이 300으로 바뀜
	printf("i=%d *p=%d **q=%d\n", i, *p, **q);

	return 0;
}
