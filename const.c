#include <stdio.h>

int main(void)
{

	const double RATE = 0.03;
	int deposit = 800000;

	printf("������: %f\n", RATE);
	printf("���� �ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	char * str = "���� C ��� �Թ���";
	char * const title = "������ C ���";

	str = "�ֱ� ���� ���� C ��� �Թ���";

	printf("\n%s: %s\n", str, title);

	return 0;
}