#include <stdio.h>

int main(void)
{
	int num = 17;

	int* ptr1 = &num;
	int* ptr2 = ptr1; // ptr1자체가 int형 변수 num의 주소값을 가지고 있는 포인터 변수이기 때문에 & 연산자 사용 X. ptr1과 ptr2 둘다 num을 가리킨다. 

	(*ptr1)++; // 17++;
	(*ptr2)++; // 18++;

	printf("%d\n", num);

	return 0;
}