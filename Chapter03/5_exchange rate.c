/*ȯ���� ����ϴ� ���α׷�*/
#include <stdio.h>

int main(void)
{
	double rate;                                       //��,�޷� ȯ��
	double usd;                                        //�޷�ȭ
	int krw;                                           //��ȭ

	printf("ȯ���� �Է��Ͻÿ�: ");            
	scanf("%lf", &rate);                               //����ڷκ��� ȯ���Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);                                 //��ȭ �ݾ� �Է�  

	usd = krw / rate;                                  //��� ��� ���

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd); 

	return 0;
}