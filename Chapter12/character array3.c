//�迭 ����
#include <stdio.h>
int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("���� ���ڿ�=%s\n", src);
	for (i = 0; src[i] != NULL; i++)                           //NULL���ڰ� ���� ������ �ݺ��ϸ鼭 ������ ���ڵ��� dst�迭�� ����
		dst[i] = src[i];                                       //�迭�� ù��° ���Ҵ� T, T�� NULL�� �������� �� p����, ������ \0�� ������ �ݺ����� ��������
	dst[i] = NULL;                                             //src�迭�� ������ \0�� ���� ������ i���� ������Ű�鼭 src�迭�� �ִ� ���� dst�迭�� �־��� = �迭 ����
	printf("����� ���ڿ�=%s\n", dst);
	return 0;
}