#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("정수를 입력하세요 :");
	scanf("%d", &a);

	b = a / 10;
	c = a % 10;

	printf("십의자리 : %d\n일의자리 : %d", b, c);

	return 0;
}