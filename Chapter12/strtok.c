#include <string.h>
#include <stdio.h>
//��������: main �Լ� �Ӹ� �ƴ϶� �ٸ� ��� �������� �� ������ ������ �� ����
char s[] = "Man is immortal, because he has a soul";
char seps[] = ",\t\n";                   
char* token;

int main(void)
{
	token = strtok(s, seps);                  //���ڿ��� �����ϰ� ���� ��ū�� ��´�.
	while (token != NULL)
	{
		printf("��ū: %s\n", token);

		token = strtok(NULL, seps);           //���� ��ū�� ��´�.
	}
}
//��ū�� �� �̻� ������� �ʴ� ������ ��� �ݺ��ϴ� ���� �����ڸ� �������� �߸� ������� ��ū�� �����ְ� �ǰ� �� ��ū�� ���� �ִ� ���� ���� �ٽ� strtok�� �ϰ� �Ǹ� �� �κп� ���� ��� �� �۾��� �����ϸ鼭 ���ڿ��� �߶���