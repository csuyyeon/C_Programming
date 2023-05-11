//포인터 배열: 포인터를 모아서 배열로 만든 것
//문자열 배열
#include <stdio.h>

int main(void)
{
	int i, n;
	char* fruits[] = {                          //텍스트 세그먼트에 저장
		"apple",                  
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits) / sizeof(fruits[0]);     //fruits에서 몇 개의 주소가 들어갈 수 있는 공간으로 구성되어 있는지 전체 배열의 개수 계산
	                                           
	for (i = 0; i < n; i++)
		printf("%s\n", fruits[i]);

	return 0;
}//fruits 이름을 가진 배열을 초기화 하면서 총 4개의 공간이 만들어졌는데 이 공간에는 문자형 배열의 시작 주소 값이 들어감