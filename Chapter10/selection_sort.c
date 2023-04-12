//선택정렬: 정렬이 안된 숫자들 중에서 최소값을 선택하여 배열의 첫번째 요소와 교환
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };    //이 값들을 순차적으로 정렬
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;                               //least는 최소값을 가진 배열의 인덱스
		for (j = i + 1; j < SIZE; j++)           //배열에서 어떤 값이 최소값인지 모르기 때문에 첫번째 칸에 들어갈 값을 찾는 것이 i=0일 때의 단계
			if (list[j] < list[least])           //현재의 최소값과 비교하여 더 작은 정수가 발견되면 그 정수가 들어있는 인덱스를 least에 저장
				least = j;

		temp = list[i];                          //list[i]와 list[least]를 서로 교환 -> 주스가 담긴 컵에서 우유가 담긴 컵으로 이동할 때 그냥 옮기는 것이 아니라 새로운 컵으로 먼저 옮긴 후 옮겨준다
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0;i < SIZE; i++)
		printf("%d", list[i]);

	printf("\n");
	return 0;
}