//배열선언-1
#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];

	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	//반복문을 통해 배열 원소에 접근
	for (i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}
