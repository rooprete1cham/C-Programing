#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	int b;

	printf("������ �Է��ϼ���:");
	scanf("%d", &a);

	if (a < 0)
	{
		b = - a;
	}
	else
	{
		b = a;
	}
	printf("���밪��%d\n", b);
}