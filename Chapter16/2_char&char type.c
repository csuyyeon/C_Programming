//���� �������� �б�
#include <stdio.h>

int main(void)
{
	char s[80];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[abc]", s);                     //�Է��� ���� ���� �� abc�� ��ġ�Ǵ� �κи� �Է����� ������

	printf("�Էµ� ���ڿ�=%s\n", s);

	return 0;
}