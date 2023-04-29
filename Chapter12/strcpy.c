#include <stdio.h>
#include <string.h>
int main(void)
{
	char filename[100];
	char s[100];
	int i;
	for (i = 0; i < 6; i++) {
		//순차적인 파일 이름을 만든다.
		strcpy(filename, "image");    //filename이라고 하는 문자배열에 image라고 하는 문자열을 복사해서 넣어줌
		sprintf(s, "%d", i);          //s라고 하는 문자열에 출력, i라고 하는 변수가 가진 값을 %d의 형태로 출력
		strcat(filename, s);          //strcat을 통해 파일 뒤에 붙여줘서 image 뒤에 0 문자가 붙음
		strcat(filename, "jpg");
		printf("%s\n", filename);
	}
	return 0;
}