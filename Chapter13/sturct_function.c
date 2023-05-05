//구조체와 함수
//함수에 구조체를 전달하고 그 안의 함수에서 구조체를 계산한 다음에 구조체의 형태로 값을 반환하는 예제
#include <stdio.h>

struct vector {
	float x;
	float y;
};
//함수가 종료되면 구조체의 형태로 값을 반환(반환 형태를 지정)
struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("벡터의 합은(%f %f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}