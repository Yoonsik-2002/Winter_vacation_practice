#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("이름을 입력하세요 : ");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;

	name1 = ReadUserName();
	pritnf("name1 : %s\n", name1);
	name2 = ReadUserName();
	printf("name2 : %s\n", name2);

	printf("print name1 again : %s\n", name1);
	printf("print name2 again : %s\n", name2);

	free(name1);
	free(name2);

	return 0;
}