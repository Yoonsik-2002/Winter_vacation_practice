#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr1 = (int*)malloc(sizeof(int)); // heap 영역에 4byte크기의 메모리 공간 할당, 해당 메모리공간의 주소값을 포인터 변수 ptr1에 반환. => ptr1은 heap영역에 할당된 이 4byte짜리 메모리 공간을 가리킴
	int* ptr2 = (int*)malloc(sizeof(int) * 3); // heap 영역에 12byte크기의 int형 배열(메모리 공간) 할당. ptr2는 heap영역에 할당된 배열의 시작 주소값(배열의 첫번째 인덱스의 주소값)을 갖는다. ptr2 = 할당된 배열의 이름(배열의 이름은 배열의 시작 주소값을 의미)
	int i;

	if (ptr1 != NULL) { // malloc 함수가 실패 했을 때를 대비한 예외코드
		*ptr1 = 20; // 원래 반환형이 void인 malloc 함수를 int형으로 형변환 해주었기 때문에 접근(포인터 연산)이 가능하다 !
	}

	
	if (ptr2 != NULL) {
		for (i = 0; i < 12; i++) {
			ptr2[i] = i + 1;
		}
	}

	printf("%d\n", *ptr1);

	for (int i = 0; i < 12; i++) {
		printf("%d", ptr2[i]);
	}

	free(ptr1); // ptr1을 인자로 하는 free함수를 호출하여 heap영역에 할당된 메모리공간을 소멸시킴
	free(ptr2); // ptr2를 인자로 하는 free함수 호출

	return 0;
}