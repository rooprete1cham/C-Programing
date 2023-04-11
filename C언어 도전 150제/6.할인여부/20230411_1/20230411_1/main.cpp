#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int age;

	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	if (age < 20)
	{
		printf("할인을 받으실 수 있습니다.\n");
	}
	else
	{
		printf("할인을 받으실 수 없습니다.\n");
	}
}