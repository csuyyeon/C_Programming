#include <stdio.h>
int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i=%d,pi=%p\n", i, pi);   
	(*pi)++;                          //pi�� ����Ű�� ��ġ�� �� ����=i�� �� ���� 10->11
	printf("i=%d,pi=%p\n", i, pi);

	printf("i=%d,pi=%p\n", i, pi);
	(*pi)++;                         //pi�� ����Ű�� ��ġ���� ���� ������ �Ŀ� pi����=4byte ����
	printf("i=%d,pi=%p\n", i, pi);

	return 0;
}