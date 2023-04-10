//배열초기화 수정
#include <stdio.h>
int main(void)
{
	int grade[5] = { 31,63 };
	int i;

	for (i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}
//초기화 되지 않은 공간은 0으로 출력