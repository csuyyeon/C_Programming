#include <stdio.h>
int main()
{
	char code = 'A';

	printf("%d %d %d \n", code, code + 1, code + 2);      //65 66 67 ���
	printf("%c %c %c\n", code, code + 1, code + 2);       //A B C ���

	return 0;
}