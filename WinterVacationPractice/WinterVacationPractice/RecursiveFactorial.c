#include <stdio.h>

int Factorial(int);

int main(void)
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	
	printf("%d! = %d", num, Factorial(num));
	return 0;
}

int Factorial(int num)
{
	if (num <= 0)
		return 1;
	else
		return num * Factorial(num - 1);
}

/* #include <stdio.h.>

int Factorial (int num)
{
	if (num <= 0)
		return 1;
	else 
		return num * Factorial(num - 1);
}

int main(void )
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	
	printf("%d! = %d", num, Factorial(num);
	return 0;
}
*/