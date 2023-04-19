#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	int b;

	printf("정수를 입력하세요:");
	scanf("%d", &a);

	if (a < 0)
	{
		b = - a;
	}
	else
	{
		b = a;
	}
	printf("절대값은%d\n", b);
}