#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("float ����: %e %e\n", FLT_MIN, FLT_MAX);
	printf("double ����: %e %e\n", FLT_MIN, FLT_MAX);
	printf("long double ����: %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;

}