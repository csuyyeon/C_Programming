//�ҹ��ڸ� �빮�ڷ� ����
#include <stdio.h>

int main(void)
{
	char letter;

	while (1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;       //�빮�� 'Q'�� �ԷµǸ� �ݺ� ����
		if (letter < 'a' || letter > 'z')
			continue;    //�ҹ��ڰ� �ƴϸ� ��� ���� �ݺ� ����
		letter -= 32;

		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}

	return 0;
}