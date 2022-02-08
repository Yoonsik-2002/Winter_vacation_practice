#include <stdio.h>

int main(void)
{
	int array[5];
	int sum = 0;

	array[0] = 2, array[1] = 2, array[2] = 1, array[3] = 3, array[4] = 10;
	// int array[ ] = {2, 2, 1, 3, 10} 초기화 리스트를 이용하여 한번에 선언도 가능

	int len = sizeof(array) / sizeof(int);

	for (int i = 0; i < len; i++) {
		sum += array[i];
	}

	printf("배열 요소에 저장된 값의 합 : %d", sum);

	return 0;
}