#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;           //왼쪽 가장자리 끝 점을 p1, 오른쪽 아래에 있는 가장자리 끝 점을 p2라 했을 때 
	struct point p2;           //구조체 point로 선언
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}

