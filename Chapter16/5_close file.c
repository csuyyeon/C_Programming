//파일 닫기와 삭제

//int fclose(FILE *stream); -> 파일을 닫는 함수
#include <stdio.h>

int main(void)
{
	if (remove("sample.txt") == -1)
		printf("sample.txt를 삭제할 수 없습니다\n");
	else
		printf("sample.txt를 삭제하였습니다\n");

	return 0;
}