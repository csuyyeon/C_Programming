//������: ������ ���� �� �ִ� ������ �̸� �����س��� �ڷ���, ������ ���̰� �������� ���̱� ���� �ʿ�
#include <stdio.h>
enum days{SUN,MON,TUE,WED,THE,FRI,SAT};                                          //enum days �������� �����ϰ� ��ȣ����� ���� ���鸸 ���� �� ����
char* days_name[] = {                                                            //days_name�̶�� �ϴ� �迭�� ������
	"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

int main(void)
{
	enum days d;                                                                 
	d = WED;                                                                     //WED��� �ϴ� ���� d��� �ϴ� ������ �־��ָ� ���� 3���� �ٲ� ��, ���� d�� enum days�� �������� �� �ȿ��� sunday���� saturday���� ���鸸 ��
	printf("%d��° ������ %s�Դϴ�.\n", d, days_name[d]);                        //days_name[0]�� �ּ� ��, days_name[1]�� 2���� �迭���� monday�� ����Ű�� �ִ� M�̶�� �ϴ� ���ڰ� �ִ� ���� �ּҸ� ����Ű�� �ִ� �� 
	return 0;
}

