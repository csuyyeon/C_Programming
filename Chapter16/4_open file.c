//���� ����
#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;                    //NULL�̶�� �� ���� ���⸦ ������ fp�� ���� ������Ʈ ���� ���� ��

	fp = fopen("sample.txt", "w");      //fopen(): ������ �����ִ� �Լ�, ������ �ϴ� ���ϸ�� � ���·� open���� ���¸� ����

	if (fp = NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fclose(fp);

	return 0;
}