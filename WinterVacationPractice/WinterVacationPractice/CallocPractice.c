#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* arr1;
	int* arr2;

	arr1 = (int*)malloc(sizeof(int) * 3);
	arr2 = (int*)calloc(3, sizeof(int));

	for (int i = 0; i < 12; i++) {
		arr1[i] = i + 1;
		printf("malloc함수 : %d\n", arr1[i]);
	}

	printf("----------------------------------\n");

	for (int i = 0; i < 12; i++) {
		printf("calloc함수 : %d\n", arr2[i]);
	}

	free(arr1);
	free(arr2);

	return 0;
}