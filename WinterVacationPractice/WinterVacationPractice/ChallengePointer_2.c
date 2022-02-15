#include <stdio.h>

int main(void)
{
	int num1 = 10; int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp; // int형 포인터 변수 temp선언

	(* ptr1) += 10;
	(* ptr2) -= 10;

	temp = ptr1; // 포인터 변수 temp가 ptr1(num1)을 가리킴
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1이 가리키는 변수에 저장된 값 : %d --- ptr2가 가리키는 변수에 저장된 값 : %d\n", *ptr1, *ptr2);

	return 0;

}

