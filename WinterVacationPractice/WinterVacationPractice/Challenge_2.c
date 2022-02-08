#include <stdio.h>

void Multiply(int, int);

int main(void)
{
	int num1, num2;

	printf("몇단부터 몇단까지 출력할까요 ? (순서 상관 X) : ");
	scanf_s("%d %d", &num1, &num2);

	Multiply(num1, num2);

	return 0;
}

void Multiply(int num1, int num2)
{
	if (num1 < num2) {
		for (int i = num1; i <= num2; i++) {
			for (int j = 1; j <= 9; j++) {
				int num = i * j;
				printf("%d * %d = %d\n", i, j, num);
			}
			puts("");
		}
	}
	else {
		for (int i = num2; i <= num1; i++) {
			for (int j = 1; j <= 9; j++) {
				int num = i * j;
				printf("%d * %d = %d\n", i, j, num);
			}
			puts("");
		}
	}
	
}