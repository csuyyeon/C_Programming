/*���� ���� ���ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	float radius;                             //���� ������
	float area;                               //����

	printf("�������� �Է��Ͻÿ�: ");          //����ڷκ��� ���� ������ ���� �Ǽ��������� �޾� ���� radius�� ����
	scanf("%f", &radius);
	area = 3.14 * radius * radius;            //���� ���� ���, C������ �ŵ� ������ ���ϴ� �����ڰ� ���� ������ ������ �ι�����
	printf("���� ����:%f\n", area);

	return 0;
}