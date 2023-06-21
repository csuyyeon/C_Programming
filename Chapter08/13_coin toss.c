//동전던지기 게임
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);
int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));                 //srand()는 난수 발생기 시드 설정

	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1)
			heads++;
		else
			tails++;
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d\n", tails);
	return 0;
}

int coin_toss(void)
{
	int i = rand() % 2;                          //rand()를 이용하여 난수를 발생, 난수의 범위를 %연산자를 사용해 0또는 1로 제한
	if (i == 0)
		return 0;
	else
		return 1;
}