//배열의 비교
#include <stdio.h>
#define SIZE 5

int main(void) 
{
	int i;
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };     //배열 안의 값은 같고 배열의 이름이 다름

	if (a == b)                              //if문의 조건이 참이면 else문장 실행, a와b는 배열의 이름으로 메모리 상의 배열이 시작하는 시작 주소를 나타냄
		printf("잘못된 결과입니다.\n");
	else
		printf("잘못된 결과입니다.\n");

	for (i = 0; i < SIZE; i++)
	{
		if (a[i] != b[i])        //a[i]와 b[i]가 같지 않으면 반복문 탈출, for문이 중단되지 않고 종료되었다는 것은 모든 배열 요소가 일치함을 의미
		{
			printf("a[]와 b[]는 같지 않습니다.\n");
			return 0;
		}
	}
	printf("a[]와 b[]는 같습니다.\n");
	return 0;
}//배열을 복사하거나 비교할 때는 전체 배열의 이름으로 복사하거나 비교하는 것이 아닌 원소 하나하나씩 복사를 함
