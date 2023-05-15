//파일 열기
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;                    //NULL이라는 건 파일 열기를 실패해 fp의 값이 업데이트 되지 않은 것

	fp = fopen("sample.txt", "w");      //fopen(): 파일을 열어주는 함수, 열고자 하는 파일명과 어떤 형태로 open할지 형태를 지정

	if (fp = NULL)
		printf("파일 열기 실피\n");
	else
		printf("파일 열기 성공\n");

	fclose(fp);

	return 0;
}