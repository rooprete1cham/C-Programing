#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &a);

	b = a / 10;
	c = a % 10;

	printf("�����ڸ� : %d\n�����ڸ� : %d", b, c);

	return 0;
}