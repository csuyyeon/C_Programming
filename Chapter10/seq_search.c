//순차탐색: 배열의 원소를 순서대로 하나씩 꺼내서 탐색키와 비교하여 원하는 값을 찾는 방법
//탐색키: 찾고자 하는 값
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)                 //for루프를 이용하여 list[i]와 key를 비교하는 연산을 배열의 크기만큼 반복
		if (list[i] == key)                    //list[i]와 key가 같으면 탐색이 성공, 키값이 발견된 배열의 인덱스 출력
			printf("탐색 성공 인덱스=%d\n", i);
	printf("탐색 종료\n");
	return 0;
}