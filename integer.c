#include <stdio.h>

int main(void)
{
	short sVar = 32000;
	int iVar = -2140000000;

	unsigned short int usVar = 65000;
	unsigned int	   uiVar = 4280000000;

	printf("���尪: %d %d\n", sVar, iVar);
	printf("���尪: %u %u\n", usVar, uiVar);

	long long dist1 = 2720000000000;
	__int64 dist2 = 4500000000000;

	printf("������ õ�ռ� ���� �Ÿ�(km): %lld\n", dist1);
	printf("������ �ؿռ� ���� �Ÿ�(km): %lld\n", dist2);


	return 0;
}