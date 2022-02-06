#include <stdio.h>

void SampleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;

	num1++, num2++;
	printf("Static : %d -- Local : %d\n", num1, num2);
}

int main(void)
{
	for (int i = 0; i < 3; i++)
		SampleFunc();
	return 0;
}