//������ �迭
#include <stdio.h>
#define CLASSES 3
#define STUDENTS 5

int main(void)
{
	int s[CLASSES][STUDENTS] = {
		{0,1,2,3,4},              //ù��° ���� ���ҵ��� �ʱⰪ
		{10,11,12,13,14},         //�ι�° ���� ���ҵ��� �ʱⰪ
		{20,21,22,23,24},         //����° ���� ���ҵ��� �ʱⰪ
	};
	int class, student, total, subtotal;
	total = 0;
	for (class = 0; class < CLASSES; class++)
	{
		subtotal = 0;
		for (student = 0; student < STUDENTS; student++)
			subtotal += s[class][student];
		printf("�б� %d�� ��� ����=%d\n", class, subtotal / STUDENTS);
		total += subtotal;
	}
	printf("��ü �л����� ��� ���� =%d\n", total / (CLASSES * STUDENTS));
	return 0;
}
