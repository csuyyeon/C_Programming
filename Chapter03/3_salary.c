/*�����ɾ��� ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	int ysalary;                                     //����
	int msalary;                                     //�����ɾ�

	printf("������ �Է��ϼ���(����:����): ");        //����ڷκ��� ����(����)�� �Է¹޾� ysalary�� ����
	scanf("%d", &ysalary);

	msalary = ysalary / 12;                          //�����ɾ�=����/12
	
	printf("�����ɾ�(����:����): %d\n",msalary);
	return 0;
}