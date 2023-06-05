//구구단 출력 프로그램
#include <stdio.h>

int main(void)
{
	int i = 1;

loop:                                        //loop라는 이름의 레이블을 현 위치에 정의
	printf("%d * %d=%d\n", 3, i, 3 * i);
	i++;
	if (i == 10)goto end;                    //i가 10이 되면 레이블 end로 점프
	goto loop;

end:
	return 0;
}
//while이나 for를 사용하면 쉽게 구현되기 때문에 goto문은 잘 사용하지 않음