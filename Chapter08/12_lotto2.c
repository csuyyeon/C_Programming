//���� ���� ���α׷�
#include <stdlib.h>                     //rand() ���� ����
#include <stdio.h>                      
#include <time.h>                       //time() ���� ����
#define MAX 45

int main(void)
{
	int i;

	srand((unsigned)time(NULL));        //srand()�� ���� �õ带 ����, �õ�� ���� �߻��⿡�� ���� ������ �����ϱ� ���� ����ϴ� ����

	for (i = 0; i < 6; i++)
		printf("%d", 1 + rand() % MAX);
	printf("\n");
	
	return 0;
}