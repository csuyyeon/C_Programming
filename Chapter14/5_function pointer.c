//�Լ�������: �Լ��� ����Ű�� ������
//�Լ��� ȣ���Ѵ� = �Լ��� ȣ���Ѵ� = �� ��û�� ������ �Լ��� �޸𸮿� �ö�´� -> �Լ��� ������ ���۵Ǵ� �ּҸ� ������ ����
#include <stdio.h>
//�Լ� ���� ����
int add(int, int);                       //add�Լ��� sub�Լ��� �����ϰ� �ִµ� �ڷ����� �ְ� ���� �̸��� ���� -> �Լ��� ������ ������ ���� ������ �̸��� ������ �ʾƵ� ��
int sub(int, int);

int main(void)
{
	int result;
	int (*pf)(int, int);                 //�Լ� ������ ����

	pf = add;                            //�Լ� �����Ϳ� �Լ� add()�� �ּ� ���� -> pf�� add() �Լ� ó�� ����
	result = pf(10, 20);                 //�Լ� �����͸� ���� �Լ� add() ȣ��
	printf("10+20�� %d\n", result);

	pf = sub;                            //�Լ� �����Ϳ� �Լ� sub()�� �ּ� ���� -> pf�� sub() �Լ� ó�� ����
	result = pf(10, 20);                 //�Լ� �����͸� ���� �Լ� sub() ȣ��
	printf("10-20�� %d\n", result);      

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sun(int x, int y)
{
	return x - y;
}
