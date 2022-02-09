#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char array[10];
	int i = 0;

	printf("단어를 입력하세요 : ");
	scanf_s("%s", array, (unsigned)_countof(array)); // scanf_s 사옹 : 문자형 변수(%s, %c)를 입력받을 때는 argument마다 size를 지정해줘야한다. (정수형, 실수형 등을 입력받을때는 scanf와 동일하게 사용) ex) scanf_s("%s %c", var1, sizeof(var1), var2, sizeof(var2));

	while (array[i] != '\0') {
		i++;
	}

	printf("글자 수는 : %d", i);
	printf("\n배열의 크기는 : %zu", sizeof(array));


	return 0;
}