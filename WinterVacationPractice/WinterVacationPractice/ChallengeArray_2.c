#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char array[10];
	int i = 0;

	printf("단어를 입력하세요 : ");
	scanf_s("%9s", array, (unsigned)_countof(array));

	while (array[i] == '\0')
		i++; 

	for (int x = 0; x < i; x++) {
		for (int y = i - 1; y >= 0; y--) {
			array[y] = array[x];
		}
	}

	printf("입력받은 단어의 역순 : %s\n", array);

	return 0;
}