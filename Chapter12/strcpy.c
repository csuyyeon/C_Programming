#include <stdio.h>
#include <string.h>
int main(void)
{
	char filename[100];
	char s[100];
	int i;
	for (i = 0; i < 6; i++) {
		//�������� ���� �̸��� �����.
		strcpy(filename, "image");    //filename�̶�� �ϴ� ���ڹ迭�� image��� �ϴ� ���ڿ��� �����ؼ� �־���
		sprintf(s, "%d", i);          //s��� �ϴ� ���ڿ��� ���, i��� �ϴ� ������ ���� ���� %d�� ���·� ���
		strcat(filename, s);          //strcat�� ���� ���� �ڿ� �ٿ��༭ image �ڿ� 0 ���ڰ� ����
		strcat(filename, "jpg");
		printf("%s\n", filename);
	}
	return 0;
}