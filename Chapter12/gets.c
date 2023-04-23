//문자 입출력 라이브러리
#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets(name);                       //name 배열의 시작 주소 값을 gets 함수에 넣어줌, 한 단어 이상을 입력 받을 때에 사용
	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);
	puts(name);
	puts(address);

	return 0;
}
//gets(): 표준 입력으로부터 엔터키가 나올 떄까지 한 줄의 라인을 입력, 입력받은 문자열은 buffer가 가리키는 주소에 저장
//puts(): 문자열에 주소 값을 넘겨 주면 그 주소 값을 시작점으로 해서 문자열이 끝날 때까지 화면에 출력