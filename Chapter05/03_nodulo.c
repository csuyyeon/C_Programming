/*������ ������ ���α׷�*/
#include <stdio.h>
#define SEC_PER_MINUTE 60                                            //��ȣ��� ����

int main(void)
{
	int input, minute, second;

	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;                                //�ʴ����� �ð��� �� �п� �ش��ϴ��� �Է¹��� �ʴ����� �ð��� SEC_PER_MINUTE�� ����
	second = input % SEC_PER_MINUTE;                                //�Է¹��� �ð��� SEC_PER_MINUTE�� ����� ���� �������� �ʿ� �ش�

	printf("%d�ʴ� %d�� %���Դϴ�.\n", input, minute, second);

	return 0;
}