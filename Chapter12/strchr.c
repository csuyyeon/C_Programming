#include <string.h>
#include <stdio.h>
int main(void)
{
	char s[] = "language";                               //�迭s ���� �迭, �ؽ�Ʈ ���׸�Ʈ�� ������� �ְ� �� ���� s��� �ϴ� �迭�� ����
	char c = 'g';                                        //���� c�� ���� ��� g�� �ʱ�ȭ
	char* p;                                             //������ ���� p ����
	int loc;                                             //������ ���� loc ����

	p = strchr(s, c);                                    //strchr: ã�� ��ġ�� �ּҰ��� �־��� s: �迭�� �̸�=�ּҰ�
	loc = (int)(p - s);                                  //s�� �ּ�, p�� ã�� �� �ּ�
	if (p != NULL) 
		printf("ù��° %c�� %d���� �߰ߵǾ���\n", c, loc);
	else
		pirntf("%c�� �߰ߵ��� �ʾ���\n", c);
	return 0;
}