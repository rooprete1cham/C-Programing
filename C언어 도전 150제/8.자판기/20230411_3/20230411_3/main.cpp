#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m;//money

	printf("���� �������ּ���:\n");
	scanf("%d", &m);

	if (m >= 500)
	{
		printf("������� ���Խ��ϴ�.\n");
	}
	if (m > 500)
	{
		printf("%d���� ��ȯ�Ǿ����ϴ�.\n", m - 500);
	}
	else
	{
		printf("%d���� ��ȯ�Ǿ����ϴ�.\n",m);
	}
}