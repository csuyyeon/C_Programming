//�����͸� ���� ����ü ����
#include <stdio.h>
//����ü ����
struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	//����ü ���� ����, �� ����ü�� ���� ���� �ֱ� ���� �޸� ���� 22����Ʈ�� ��򰡿� �Ҵ��� �ǰ� �� �ȿ� ������ ��
	struct student s = { 200070001,"ȫ�浿",4.3 };
	struct student* p;         //����ü ������ ���� p����, p�� �޸� ��򰡿� 4����Ʈ�� ������ ���� �����ϰ� ��

	p = &s;

	printf("�й�=%d �̸�=%s Ű=%f\n", s.number, s.name, s.grade);
	printf("�й�=%d �̸�=%s Ű=%f\n", (*p).number,(*p).name,(*p).grade);
	printf("�й�=%d �̸�=%s Ű=%f\n", p->number, p->name, p->grade);

	return 0;
}