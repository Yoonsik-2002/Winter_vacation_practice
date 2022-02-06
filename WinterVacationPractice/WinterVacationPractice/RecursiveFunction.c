#include <stdio.h>

void Recursive(int); // 함수 선언

int main(void)
{
	Recursive(3); // 함수 호출
	return 0;
}

void Recursive(int num) // 함수 정의 
{
	if (num <= 0) // 재귀함수의 탈출조건
		return;
	printf("Recursive Call ! \n", num); 
	Recursive(num - 1); // 함수 호출(재귀)
}

/*#incude <stdio.h>

void Recursive(int num)
{
	if (num <= 0)
	return;
	printf("Recursive Call ! \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}*/