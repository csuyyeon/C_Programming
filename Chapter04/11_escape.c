#include <stdio.h>

int main()
{
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id:____\b\b\b\b");                                                    //\b: ȭ���� Ŀ���� �ڷ� �����̴� ���� ����
	scanf("%d", &id);
	printf("password:____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);  
	return 0;
}